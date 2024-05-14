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

    x1_fxd_t x1_int_d, x1_int_q;
    x2_fxd_t x2_int_d, x2_int_q, x2_int_q_q;
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
    t1_fxd_t x2_to_t1, b_to_t1;
    t2_fxd_t c_to_t1, sq_to_t1;
    s_fxd_t t0_to_s, t1_to_s, t2_to_s, s_res;

    always_ff @(posedge clk)
    if (!rst_b) begin
        dv_p0 <= '0;
        dv_p1 <= '0;
        dv_p2 <= '0;
    end
    else begin
	// first stage save inputs
        x1_int_q <= x1_int_d;
        x2_int_q <= x2_int_d;
        dv_p0 <= x_dv;
  
  	// second stage square and lut      
        sq_fxd_q <= sq_fxd_d;
        a_fxd_q <= a_fxd_rdz;
        b_fxd_q <= b_fxd_rdz;
        c_fxd_q <= c_fxd_rdz;
        x2_int_q_q <= x2_int_q;
        dv_p1 <= dv_p0;

	// third stage multiplication
        t0_fxd_q <= t0_fxd_d;
        t1_fxd_q <= t1_fxd_d;
        t2_fxd_q <= t2_fxd_d;
        dv_p2 <= dv_p1;
    end

    square s0 (x2_int_q, sq_fxd_d);
    mul1 m0 (b_to_t1, x2_to_t1, t1_fxd_d);
    mul2 m1 (c_to_t1, sq_to_t1, t2_fxd_d);
    lut l0 (x1_int_q, a_fxd_d, b_fxd_d, c_fxd_d);

    always_comb 
    begin
    	// slice input
    	x1_int_d = x[23:17];
    	x2_int_d = x[16:0];
    
    	// read portion of a 
    	a_fxd_rdz = (a_fxd_d[30:30-A_W] + a_fxd_d[30-A_W-1]);
    	// propagate a to t0
        t0_fxd_d = a_fxd_q;
        
        // read portion of b
        b_fxd_rdz = (b_fxd_d[30:30-B_W] + b_fxd_d[30-B_W-1]);
        // normalize x2 to t1
        x2_to_t1 = {x2_int_q_q, {(T1_F-Y_F){1'b0}}};
        b_to_t1 = {b_fxd_q, {(T1_F-B_F){1'b0}}};
        
        c_fxd_rdz = (c_fxd_d[30:30-C_W] + c_fxd_d[30-C_W-1]);
        // normalize c to t1
        c_to_t1 = {c_fxd_q, {(T2_F-C_F){1'b0}}};
        // normalize sq to t1
        //discard 3 bits to be complient with cpp model precision
        sq_to_t1 = {sq_fxd_q>>(3), 3'b0};
	
	// normalize tx to s
	t0_to_s = {(t0_fxd_q), {(S_F - A_F){1'b0}}};
	t1_to_s = t1_fxd_q;
	t2_to_s = t2_fxd_q;
	// add partial results
	s_res = t0_to_s + t1_to_s + t2_to_s;

	// write outputs
        y_dv = dv_p2;
        // truncate addtional bits
        y    = s_res[S_W-1 : R_F];
    end

//$display("t0 0x%0h", {sq_to_t1, 1'b0});
endmodule
