// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vquadra_top.h for the primary calling header

#ifndef VERILATED_VQUADRA_TOP___024ROOT_H_
#define VERILATED_VQUADRA_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vquadra_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vquadra_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_b,0,0);
    VL_IN8(x_dv,0,0);
    VL_OUT8(y_dv,0,0);
    CData/*0:0*/ quadra_top__DOT__dv_p0;
    CData/*0:0*/ quadra_top__DOT__dv_p1;
    CData/*0:0*/ quadra_top__DOT__dv_p2;
    CData/*6:0*/ quadra_top__DOT__x1_int_q;
    CData/*0:0*/ quadra_top__DOT__m0__DOT__sign;
    CData/*0:0*/ quadra_top__DOT__m1__DOT__sign;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(x,23,0);
    VL_OUT(y,24,0);
    IData/*16:0*/ quadra_top__DOT__x2_int_q;
    IData/*16:0*/ quadra_top__DOT__x2_int_q_q;
    IData/*23:0*/ quadra_top__DOT__sq_fxd_q;
    IData/*31:0*/ quadra_top__DOT__a_fxd_d;
    IData/*31:0*/ quadra_top__DOT__a_fxd_q;
    IData/*31:0*/ quadra_top__DOT__b_fxd_d;
    IData/*31:0*/ quadra_top__DOT__b_fxd_q;
    IData/*31:0*/ quadra_top__DOT__c_fxd_d;
    IData/*31:0*/ quadra_top__DOT__c_fxd_q;
    IData/*30:0*/ quadra_top__DOT__t0_fxd_q;
    IData/*30:0*/ quadra_top__DOT__t1_fxd_d;
    IData/*30:0*/ quadra_top__DOT__t1_fxd_q;
    IData/*30:0*/ quadra_top__DOT__t2_fxd_d;
    IData/*30:0*/ quadra_top__DOT__t2_fxd_q;
    IData/*30:0*/ quadra_top__DOT__s_fxd_d;
    IData/*30:0*/ quadra_top__DOT__s_fxd_q;
    IData/*30:0*/ quadra_top__DOT__t0_to_s;
    IData/*30:0*/ quadra_top__DOT__t1_to_s;
    IData/*30:0*/ quadra_top__DOT__t2_to_s;
    IData/*30:0*/ quadra_top__DOT__s_res;
    IData/*29:0*/ quadra_top__DOT__m0__DOT__x1_sign;
    IData/*29:0*/ quadra_top__DOT__m0__DOT__x2_sign;
    IData/*29:0*/ quadra_top__DOT__m1__DOT__x1_sign;
    IData/*29:0*/ quadra_top__DOT__m1__DOT__x2_sign;
    IData/*31:0*/ __VactIterCount;
    QData/*61:0*/ quadra_top__DOT__t1_res;
    QData/*61:0*/ quadra_top__DOT__x2_to_res;
    QData/*61:0*/ quadra_top__DOT__b_to_res;
    QData/*60:0*/ quadra_top__DOT__t1_res_temp;
    QData/*61:0*/ quadra_top__DOT__t2_res;
    QData/*59:0*/ quadra_top__DOT__m0__DOT__res;
    QData/*59:0*/ quadra_top__DOT__m0__DOT__res_sign;
    QData/*60:0*/ quadra_top__DOT__m0__DOT__res_final;
    QData/*59:0*/ quadra_top__DOT__m1__DOT__res;
    QData/*59:0*/ quadra_top__DOT__m1__DOT__res_sign;
    QData/*60:0*/ quadra_top__DOT__m1__DOT__res_final;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vquadra_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vquadra_top___024root(Vquadra_top__Syms* symsp, const char* v__name);
    ~Vquadra_top___024root();
    VL_UNCOPYABLE(Vquadra_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
