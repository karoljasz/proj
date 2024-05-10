//
// Quadratic Approximation Unit (QAU) Verilator C++ Testbench
//

// tjnagler, 2023-12-23

#include <iostream>
#include <iomanip>
#include <deque>

#include "Quadra.hpp" // C++ model (reference)

#include "verilated.h" // Verilated RTL

// If "verilator --trace" is used, include the tracing class
#ifdef VM_TRACE
#include <verilated_vcd_c.h>
#endif

#include "Vquadra_top.h" // auto-generated by Verilator

const uint32_t T_HALF_CLOCK = 500; // [time precision units] = 500ps for 1ps precision
const uint32_t EM_LATENCY   = 8;   // [cycles]

// --------------------------------------------------------------------------------

inline void vmTrace
(
    const std::unique_ptr<VerilatedVcdC>    & trace_fp,
    const std::unique_ptr<VerilatedContext> & contextp
)
{
#if VM_TRACE
    if (trace_fp)
        trace_fp->dump (contextp->time());
#endif
}

inline void atNegEdgeHalfClk
(
    const std::unique_ptr<Vquadra_top>      & top,
    const std::unique_ptr<VerilatedContext> & contextp,
    const std::unique_ptr<VerilatedVcdC>    & trace_fp
)
{
    // Clock (phase 0):
    top->clk = 0;

    // Increment time by 1/2 period:
    contextp->timeInc(T_HALF_CLOCK);

    // Evaluate @(negedge clk):
    top->eval();

    vmTrace(trace_fp, contextp);
}

inline void atPosEdgeHalfClk
(
    const std::unique_ptr<Vquadra_top>      & top,
    const std::unique_ptr<VerilatedContext> & contextp,
    const std::unique_ptr<VerilatedVcdC>    & trace_fp
)
{
    // Clock (phase 1):
    top->clk = 1;

    // Increment time by 1/2 period:
    contextp->timeInc(T_HALF_CLOCK);

    // Evaluate @(posedge clk):
    top->eval();

    vmTrace(trace_fp, contextp);
}

inline void atPosEdgeClk
(
    const std::unique_ptr<Vquadra_top>      & top,
    const std::unique_ptr<VerilatedContext> & contextp,
    const std::unique_ptr<VerilatedVcdC>    & trace_fp
)
{
    atNegEdgeHalfClk(top, contextp, trace_fp);
    atPosEdgeHalfClk(top, contextp, trace_fp);
}

inline void genReset
(
    const std::unique_ptr<Vquadra_top>      & top,
    const std::unique_ptr<VerilatedContext> & contextp,
    const std::unique_ptr<VerilatedVcdC>    & trace_fp,
    const vluint64_t                        & clock_cntr
)
{
    // Reset:
    top->rst_b = (clock_cntr == 1) ? 0 : 1;

    // Clock (phase 0):
    top->clk = 0;

    // Increment time by 1/2 period:
    contextp->timeInc(T_HALF_CLOCK);

    // Evaluate @(negedge clk):
    top->eval();

    // Dump trace:
    vmTrace(trace_fp, contextp);

    // Clock (phase 1):
    top->clk = 1;

    // Increment time by 1/2 period:
    contextp->timeInc(T_HALF_CLOCK);

    // Evaluate @(posedge clk):
    top->eval();

    // Dump trace:
    vmTrace(trace_fp, contextp);
}

// --------------------------------------------------------------------------------

inline void checkOutput
(
    const std::unique_ptr<Vquadra_top> & top,
    std::deque<x_fxd_t>                & lat_fifo
)
{
    using namespace std;

    x_fxd_t x_fxd = lat_fifo.front();
                    lat_fifo.pop_front();

    // cast input to double:
    double  x_dbl      = x_fxd.to_double();

    // get RTL output:
    y_int_t y_rtl_int  = top->y;
    dv_t    y_rtl_dv   = top->y_dv;

    // convert to fixed:
    y_fxd_t y_rtl_fxd  = 0; y_rtl_fxd.set_slc(0, y_rtl_int);

    // cast RTL output to double::
    double   y_rtl_dbl = y_rtl_fxd.to_double();

    // C++ model:
    y_fxd_t  y_cpp_fxd = approxFixed(x_fxd);
    double   y_cpp_dbl = y_cpp_fxd.to_double();

    // CPU refrence:
    double   y_ref_dbl = sin((2.0 * x_dbl) - PI_OVER_4);

    // Compute C++ error:
    double   y_cpp_err  = abs(y_cpp_dbl - y_ref_dbl);

    // Compute RTL error:
    double   y_rtl_err  = abs(y_rtl_dbl - y_ref_dbl);

    // Check against spec:
    bool     cpp_err_ok = (y_cpp_err < ERR_TOL);
    bool     rtl_err_ok = (y_rtl_err < ERR_TOL);
    bool     in_spec    = (cpp_err_ok && rtl_err_ok);

    // Check RTL vs C++ match:
    bool     match_ok   = (y_rtl_dbl == y_cpp_dbl);

    // Enable echoing of results:
    bool     echo_en    = y_rtl_dv && (!in_spec || !match_ok);

    const int SP_PREC  = 12;
    const int SP_WIDTH = SP_PREC + 8;

    if (echo_en)
    {
        cout << "  ";
        cout << dec << scientific << setw(SP_WIDTH) << setprecision(SP_PREC) << right << x_dbl     << "   "
             << dec << scientific << setw(SP_WIDTH) << setprecision(SP_PREC) << right << y_ref_dbl << "   "
             << dec << scientific << setw(SP_WIDTH) << setprecision(SP_PREC) << right << y_cpp_dbl << "  ["
             << dec << scientific << setw(SP_WIDTH) << setprecision(SP_PREC) << right << y_cpp_err << "]  "
             << ((match_ok) ? " ==" : " !=")
             << dec << scientific << setw(SP_WIDTH) << setprecision(SP_PREC) << right << y_rtl_dbl << "  ["
             << dec << scientific << setw(SP_WIDTH) << setprecision(SP_PREC) << right << y_rtl_err << "]  "
             << endl;
    }
}

void testQuadra
(
    const std::unique_ptr<Vquadra_top>      & top,
    const std::unique_ptr<VerilatedContext> & contextp,
    const std::unique_ptr<VerilatedVcdC>    & trace_fp,
    std::deque<x_fxd_t>                     & lat_fifo,
    vluint64_t                              & clock_cntr
)
{
    using namespace std;

    // Test params:
//  uint32_t x_start = 0x000000; // 0.0
    uint32_t x_start = 0xfffff0;
    uint32_t x_stop  = 0xffffff; // 1.999...
    uint32_t x_step  = 0x000001; // exhaustive test
//  uint32_t x_step  = 0x000001; // sparse test

    // Main simulation loop:
    for (uint32_t x = x_start; x <= x_stop; x += x_step)
    {
        x_int_t x_int = x;
        x_fxd_t x_fxd = 0; // (u1.23)
        x_fxd.set_slc(0, x_int);

        lat_fifo.push_back(x_fxd); // write x value to queue

        top->x    = x; // set input x to f(x)
        top->x_dv = 1; // assert data valid

        atPosEdgeClk(top, contextp, trace_fp);
        clock_cntr++;
        checkOutput(top, lat_fifo);
    }

    // Idle for 5 cycles to allow for pipeline to empty out:
    for (uint32_t i = 0; i < 5; i++)
    {
        top->x    = 0.0;
        top->x_dv = 0;

        atPosEdgeClk(top, contextp, trace_fp);
        clock_cntr++;
        checkOutput(top, lat_fifo);
    }

    uint64_t lat_fifo_size = lat_fifo.size();
    if (lat_fifo_size > 0)
        cout << endl << "Latency fifo contains " << lat_fifo.size() << " sample(s)." << endl;
}

// --------------------------------------------------------------------------------

int main(int argc, char* argv[], char* env[])
{
    using namespace std;

    // Instantiate new context:
    const unique_ptr<VerilatedContext> contextp{new VerilatedContext};

    // Set debug level, 0 is off, 9 is highest:
    contextp->debug(0);

     // Set randomization reset policy:
    contextp->randReset(2);

    // Pass command line arguments:
    contextp->commandArgs(argc, argv);

    // Construct the Verilated model, from Veuemunit.h generated
    // from Verilating "euemunit.vs" --("em" will be the hierarchical
    // name of the module)
    const unique_ptr<Vquadra_top> top{new Vquadra_top{contextp.get(), "top"}};

    // If verilator was invoked with --trace, open trace
#if VM_TRACE
    Verilated::traceEverOn(true); // compute traced signals
    const unique_ptr<VerilatedVcdC> trace_fp{new VerilatedVcdC};
    top->trace(trace_fp.get(), 5); // trace max 5 levels of hierarchy
    trace_fp->open("dump.vcd");   // open VCD file
#else
    const unique_ptr<VerilatedVcdC> trace_fp;
#endif

    // Current simulation time (64-bit unsigned)
    vluint64_t clock_cntr = 0;

    // Initialize input signals:
    top->clk                = 0; // clock
    top->rst_b              = 1; // reset
    top->x                  = 0; // x
    top->x_dv               = 0; // data valid

    deque<x_fxd_t> lat_fifo;  // latency FIFO

    // Generate reset:
    for (; clock_cntr < 10; clock_cntr++)
        genReset(top, contextp, trace_fp, clock_cntr);

    // Idle for 5 cycles to allow for reset to propagate:
    for (uint32_t i = 0; i < 5; i++, clock_cntr++)
        atPosEdgeClk(top, contextp, trace_fp);

    // Test quadratic:
    testQuadra (top, contextp, trace_fp, lat_fifo, clock_cntr);

    cout << endl << "Testbench ran for " << clock_cntr << " clocks." << endl;

    // Final cleanup:
    top->final();

#if VM_TRACE
    trace_fp->close();
#endif

    return 0;
}
