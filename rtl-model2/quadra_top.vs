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

    x1_fxd_t x1_int_d, x1_int_q, x1_int;
    x2_fxd_t x2_int_d, x2_int_q, x2_int_q_q, x2_int;
    sq_fxd_t sq_fxd_d, sq_fxd_q;
    a_fxd_t a_fxd_q, a_fxd_rdz;
    logic [30:0] a_fxd_d;
    b_fxd_t b_fxd_q, b_fxd_rdz;
    logic [30:0] b_fxd_d;
    c_fxd_t c_fxd_q, c_fxd_rdz;
    logic [30:0] c_fxd_d;
    t0_fxd_t t0_fxd_d, t0_fxd_q;
    t1_fxd_t t1_fxd_d, t1_fxd_q;
    t2_fxd_t t2_fxd_d, t2_fxd_q;
    s_fxd_t s_fxd_d, s_fxd_q;
    t1_res_t t1_res, x2_to_res, b_to_res;
    t1_res_temp_t t1_res_temp;
    t2_res_t t2_res;
    t1_fxd_t x2_to_t1, b_to_t1;
    t2_fxd_t c_to_t1, sq_to_t1;
    s_fxd_t t0_to_s, t1_to_s, t2_to_s, s_res;
    
    assign x1_int_d = x1_int;
    assign x2_int_d = x2_int;

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
        
        x1_int_q <= x1_int_d;
        x2_int_q <= x2_int_d;
        
        sq_fxd_q <= sq_fxd_d;
        a_fxd_q <= a_fxd_rdz;
        b_fxd_q <= b_fxd_rdz;
        c_fxd_q <= c_fxd_rdz;
        x2_int_q_q <= x2_int_q;

        t0_fxd_q <= t0_fxd_d;
        t1_fxd_q <= t1_fxd_d;
        t2_fxd_q <= t2_fxd_d;

        s_fxd_q <= s_fxd_d;
    end

    assign x1_int = x[23:17];
    assign x2_int = x[16:0];

    square s0 (x2_int_q, sq_fxd_d);
    mul1 m0 (b_to_t1, x2_to_t1, t1_fxd_d);
    mul2 m1 (c_to_t1, sq_to_t1, t2_fxd_d);
    lut l0 (x1_int_q, a_fxd_d, b_fxd_d, c_fxd_d);

    always_comb 
    begin
    	a_fxd_rdz = (a_fxd_d[30:30-A_W] + a_fxd_d[30-A_W-1]);
        t0_fxd_d = a_fxd_q;
        
        b_fxd_rdz = (b_fxd_d[30:30-B_W] + b_fxd_d[30-B_W-1]);
        x2_to_t1 = {x2_int_q_q, {(T1_F-Y_F){1'b0}}};
        b_to_t1 = {b_fxd_q, {(T1_F-B_F){1'b0}}};
        
        c_fxd_rdz = (c_fxd_d[30:30-C_W] + c_fxd_d[30-C_W-1]);
        c_to_t1 = {c_fxd_q, {(T2_F-C_F){1'b0}}};
        sq_to_t1 = {sq_fxd_q>>12, 3'b0};

	t0_to_s = {(t0_fxd_q), {(S_F - A_F){1'b0}}};
	t1_to_s = t1_fxd_q;
	t2_to_s = t2_fxd_q;
	s_res = t0_to_s + t1_to_s + t2_to_s;
	
	//$display("t0 0x%0h", {t0_to_s, 1'b0});
	//$display("t1 0x%0h", {t1_to_s, 1'b0});
	//$display("t2 0x%0h", {t2_to_s, 1'b0});
	//$display("here 0x%0h", s_res);

        s_fxd_d = s_res[S_W-1 : R_F];
        y_dv = dv_p2;
        y    = s_fxd_d;
    end


endmodule
