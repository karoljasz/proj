`include "quadra.vh"

module square
(
    input  x2_fxd_t x2,
    output sq_fxd_t sq
);
    sq_res_t res;
    // Compute x2^2:
    always_comb res = x2 * x2;
    always_comb sq = (res >> (2*X2_W - SQ_W));

endmodule    
