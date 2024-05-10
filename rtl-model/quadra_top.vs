`include "quadra.vh"

module quadra_top
(
    input  ck_t clk,
    input  rs_t rst_b,
    input  x_t  x,
    input  dv_t x_dv,
    output y_t  y,
    output dv_t y_dv
);
    // Pipeline data valid (3 stages):
    dv_t dv_p0, dv_p1, dv_p2;

    x1_fxd_t x1_int;
    x2_fxd_t x2_int, x2_int_q;
    sq_fxd_t sq_fxd_d, sq_fxd_q;
    a_fxd_t a_fxd_d, a_fxd_q;
    b_fxd_t b_fxd_d, b_fxd_q;
    c_fxd_t c_fxd_d, c_fxd_q;
    t0_fxd_t t0_fxd_d, t0_fxd_q;
    t1_fxd_t t1_fxd_d, t1_fxd_q;
    t2_fxd_t t2_fxd_d, t2_fxd_q;
    s_fxd_t s_fxd_d, s_fxd_q;

    always_ff @(posedge clk)
    if (!rst_b) begin
        dv_p0 <= '0;
        dv_p1 <= '0;
        dv_p2 <= '0;
    end
    else begin
        dv_p0 <= x_dv;
        dv_p1 <= dv_p0;
        dv_p2 <= dv_p1;
        sq_fxd_q <= sq_fxd_d;
        a_fxd_q <= a_fxd_d;
        b_fxd_q <= b_fxd_d;
        c_fxd_q <= c_fxd_d;
        x2_int_q <= x2_int;

        t0_fxd_q <= t0_fxd_d;
        t1_fxd_q <= t1_fxd_d;
        t2_fxd_q <= t2_fxd_d;

        s_fxd_q <= s_fxd_d;
    end

    assign x1_int = x[23:17];
    assign x2_int = x[16:0];

    square s0 (x2_int, sq_fxd_d);
    lut l0 (x1_int, a_fxd_d, b_fxd_d, c_fxd_d);

    always_comb 
    begin
        t0_fxd_d = a_fxd_q;
        t1_fxd_d = b_fxd_q * x2_int_q;
        t2_fxd_d = c_fxd_q * sq_fxd_d;

        s_fxd_d = t0_fxd_q + t1_fxd_q + t2_fxd_q;
    end

    // Outputs:
    always_comb y_dv = dv_p2;
    always_comb y    = s_fxd_q;

endmodule
