`include "quadra.vh"

module mul
(
    input  t1_fxd_t x1,
    input  t1_fxd_t x2,
    output t1_fxd_t y
);
    logic sign;
    logic unsigned [T1_W-1-1:0] x1_sign, x2_sign;
    logic unsigned [(T1_W-1)*2-1:0] res, res_sign;
    logic unsigned [(T1_W-1)*2:0] res_final;

    always_comb
    begin
    	sign = x1[T1_W-1];
    	x1_sign = sign ? (~x1[T1_W-2:0] + 'b1) : (x1[T1_W-2:0]);
    	x2_sign = x2[T1_W-2:0];
    	res = x1_sign * x2_sign;
    	res_sign = sign ? (~res + 'b1) : (res);
    	res_final = {sign, res_sign};
    	y = res_final >> (T1_F);
    end

endmodule    
