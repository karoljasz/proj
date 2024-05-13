`include "quadra.vh"

module mul
(
    input  x2_fxd_t x2,
    output sq_fxd_t sq
);
    // Compute x2^2:
    always_comb sq = x2 * x2;

endmodule    
