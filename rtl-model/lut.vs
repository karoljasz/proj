`include "quadra.vh"

module lut
(
    input  x1_fxd_t  x1,
    output a_fxd_t   a,
    output b_fxd_t   b,
    output c_fxd_t   c
);
    // Read coefficients:
    always_comb
    unique casez (x1)
        // begin a
        7'b0b0 : c = 'hf4afb0cd
        7'b0b1 : c = 'hf50b9983
        7'b0b10 : c = 'hf56a3f45
        7'b0b11 : c = 'hf5cb8a69
        7'b0b100 : c = 'hf62f629c
        7'b0b101 : c = 'hf695aeea
        7'b0b110 : c = 'hf6fe55bf
        7'b0b111 : c = 'hf7693cf3
        7'b0b1000 : c = 'hf7d649cc
        7'b0b1001 : c = 'hf8456108
        7'b0b1010 : c = 'hf8b666e2
        7'b0b1011 : c = 'hf9293f18
        7'b0b1100 : c = 'hf99dccf5
        7'b0b1101 : c = 'hfa13f356
        7'b0b1110 : c = 'hfa8b94b3
        7'b0b1111 : c = 'hfb049323
        7'b0b10000 : c = 'hfb7ed068
        7'b0b10001 : c = 'hfbfa2df2
        7'b0b10010 : c = 'hfc768cec
        7'b0b10011 : c = 'hfcf3ce3e
        7'b0b10100 : c = 'hfd71d298
        7'b0b10101 : c = 'hfdf07a7a
        7'b0b10110 : c = 'hfe6fa63b
        7'b0b10111 : c = 'hfeef3610
        7'b0b11000 : c = 'hff6f0a16
        7'b0b11001 : c = 'hffef0259
        7'b0b11010 : c = 'h6efedb
        7'b0b11011 : c = 'heedf9e
        7'b0b11100 : c = 'h16e84ab
        7'b0b11101 : c = 'h1edce18
        7'b0b11110 : c = 'h26c9c14
        7'b0b11111 : c = 'h2eaceed
        7'b0b100000 : c = 'h3684715
        7'b0b100001 : c = 'h3e4e531
        7'b0b100010 : c = 'h4608a18
        7'b0b100011 : c = 'h4db16e2
        7'b0b100100 : c = 'h5546cee
        7'b0b100101 : c = 'h5cc6de5
        7'b0b100110 : c = 'h642fbc8
        7'b0b100111 : c = 'h6b7f8f5
        7'b0b101000 : c = 'h72b482d
        7'b0b101001 : c = 'h79ccc9c
        7'b0b101010 : c = 'h80c69e2
        7'b0b101011 : c = 'h87a0419
        7'b0b101100 : c = 'h8e57fd9
        7'b0b101101 : c = 'h94ec246
        7'b0b101110 : c = 'h9b5b10e
        7'b0b101111 : c = 'ha1a3277
        7'b0b110000 : c = 'ha7c2d61
        7'b0b110001 : c = 'hadb894e
        7'b0b110010 : c = 'hb382e66
        7'b0b110011 : c = 'hb920582
        7'b0b110100 : c = 'hbe8f82c
        7'b0b110101 : c = 'hc3cf0a8
        7'b0b110110 : c = 'hc8dd9f8
        7'b0b110111 : c = 'hcdb9fe3
        7'b0b111000 : c = 'hd262ef6
        7'b0b111001 : c = 'hd6d7490
        7'b0b111010 : c = 'hdb15ede
        7'b0b111011 : c = 'hdf1dce6
        7'b0b111100 : c = 'he2ede8a
        7'b0b111101 : c = 'he685489
        7'b0b111110 : c = 'he9e3087
        7'b0b111111 : c = 'hed0650b
        7'b0b1000000 : c = 'hefee58b
        7'b0b1000001 : c = 'hf29a664
        7'b0b1000010 : c = 'hf509ce9
        7'b0b1000011 : c = 'hf73bf5a
        7'b0b1000100 : c = 'hf9304f1
        7'b0b1000101 : c = 'hfae65db
        7'b0b1000110 : c = 'hfc5db40
        7'b0b1000111 : c = 'hfd95f44
        7'b0b1001000 : c = 'hfe8ed04
        7'b0b1001001 : c = 'hff4809f
        7'b0b1001010 : c = 'hffc172f
        7'b0b1001011 : c = 'hfffaecf
        7'b0b1001100 : c = 'hfff4698
        7'b0b1001101 : c = 'hffadea4
        7'b0b1001110 : c = 'hff2780f
        7'b0b1001111 : c = 'hfe614f0
        7'b0b1010000 : c = 'hfd5b862
        7'b0b1010001 : c = 'hfc1667b
        7'b0b1010010 : c = 'hfa9244f
        7'b0b1010011 : c = 'hf8cf7ef
        7'b0b1010100 : c = 'hf6ce865
        7'b0b1010101 : c = 'hf48fdb6
        7'b0b1010110 : c = 'hf2140dc
        7'b0b1010111 : c = 'hef5bbc6
        7'b0b1011000 : c = 'hec67955
        7'b0b1011001 : c = 'he938559
        7'b0b1011010 : c = 'he5cec90
        7'b0b1011011 : c = 'he22bc9e
        7'b0b1011100 : c = 'hde50410
        7'b0b1011101 : c = 'hda3d254
        7'b0b1011110 : c = 'hd5f37b5
        7'b0b1011111 : c = 'hd17455a
        7'b0b1100000 : c = 'hccc0d40
        7'b0b1100001 : c = 'hc7da233
        7'b0b1100010 : c = 'hc2c17ce
        7'b0b1100011 : c = 'hbd78273
        7'b0b1100100 : c = 'hb7ff748
        7'b0b1100101 : c = 'hb258c2e
        7'b0b1100110 : c = 'hac857c0
        7'b0b1100111 : c = 'ha68714a
        7'b0b1101000 : c = 'ha05f0c6
        7'b0b1101001 : c = 'h9a0eed3
        7'b0b1101010 : c = 'h93984b1
        7'b0b1101011 : c = 'h8cfcc3a
        7'b0b1101100 : c = 'h863dfdc
        7'b0b1101101 : c = 'h7f5da92
        7'b0b1101110 : c = 'h785d7db
        7'b0b1101111 : c = 'h713f3b8
        7'b0b1110000 : c = 'h6a04aa2
        7'b0b1110001 : c = 'h62af982
        7'b0b1110010 : c = 'h5b41dac
        7'b0b1110011 : c = 'h53bd4d6
        7'b0b1110100 : c = 'h4c23d11
        7'b0b1110101 : c = 'h44774c4
        7'b0b1110110 : c = 'h3cb9a9f
        7'b0b1110111 : c = 'h34ecd99
        7'b0b1111000 : c = 'h2d12ce4
        7'b0b1111001 : c = 'h252d7e7
        7'b0b1111010 : c = 'h1d3ee38
        7'b0b1111011 : c = 'h1548f8f
        7'b0b1111100 : c = 'hd4dbc4
        7'b0b1111101 : c = 'h54f2c3
        7'b0b1111110 : c = 'hffd4f487
        7'b0b1111111 : c = 'hff55010c
        default    :  a = 'x;
    endcase

    always_comb
    unique casez (x1)
        // begin b
        7'b0b0 : c = 'h16a09e66
        7'b0b1 : c = 'h1752c7ca
        7'b0b10 : c = 'h17ff1c9b
        7'b0b11 : c = 'h18a571c5
        7'b0b100 : c = 'h19459db3
        7'b0b101 : c = 'h19df785b
        7'b0b110 : c = 'h1a72db48
        7'b0b111 : c = 'h1affa1a1
        7'b0b1000 : c = 'h1b85a836
        7'b0b1001 : c = 'h1c04cd86
        7'b0b1010 : c = 'h1c7cf1c7
        7'b0b1011 : c = 'h1cedf6f2
        7'b0b1100 : c = 'h1d57c0c6
        7'b0b1101 : c = 'h1dba34d1
        7'b0b1110 : c = 'h1e153a76
        7'b0b1111 : c = 'h1e68baf4
        7'b0b10000 : c = 'h1eb4a16d
        7'b0b10001 : c = 'h1ef8dae6
        7'b0b10010 : c = 'h1f355652
        7'b0b10011 : c = 'h1f6a0491
        7'b0b10100 : c = 'h1f96d87a
        7'b0b10101 : c = 'h1fbbc6d6
        7'b0b10110 : c = 'h1fd8c66b
        7'b0b10111 : c = 'h1fedcff9
        7'b0b11000 : c = 'h1ffade3d
        7'b0b11001 : c = 'h1fffedf5
        7'b0b11010 : c = 'h1ffcfddc
        7'b0b11011 : c = 'h1ff20eae
        7'b0b11100 : c = 'h1fdf2326
        7'b0b11101 : c = 'h1fc44001
        7'b0b11110 : c = 'h1fa16bf6
        7'b0b11111 : c = 'h1f76afba
        7'b0b100000 : c = 'h1f4415fc
        7'b0b100001 : c = 'h1f09ab62
        7'b0b100010 : c = 'h1ec77e87
        7'b0b100011 : c = 'h1e7d9ff5
        7'b0b100100 : c = 'h1e2c2224
        7'b0b100101 : c = 'h1dd31972
        7'b0b100110 : c = 'h1d729c22
        7'b0b100111 : c = 'h1d0ac253
        7'b0b101000 : c = 'h1c9ba5f9
        7'b0b101001 : c = 'h1c2562dc
        7'b0b101010 : c = 'h1ba8168c
        7'b0b101011 : c = 'h1b23e05b
        7'b0b101100 : c = 'h1a98e156
        7'b0b101101 : c = 'h1a073c3c
        7'b0b101110 : c = 'h196f1576
        7'b0b101111 : c = 'h18d0930c
        7'b0b110000 : c = 'h182bdc9f
        7'b0b110001 : c = 'h17811b5b
        7'b0b110010 : c = 'h16d079ef
        7'b0b110011 : c = 'h161a2484
        7'b0b110100 : c = 'h155e48ac
        7'b0b110101 : c = 'h149d155f
        7'b0b110110 : c = 'h13d6bae8
        7'b0b110111 : c = 'h130b6add
        7'b0b111000 : c = 'h123b5811
        7'b0b111001 : c = 'h1166b686
        7'b0b111010 : c = 'h108dbb66
        7'b0b111011 : c = 'hfb09cec
        7'b0b111100 : c = 'hecf9260
        7'b0b111101 : c = 'hdead404
        7'b0b111110 : c = 'hd029b05
        7'b0b111111 : c = 'hc172170
        7'b0b1000000 : c = 'hb28a224
        7'b0b1000001 : c = 'ha3758bd
        7'b0b1000010 : c = 'h943818e
        7'b0b1000011 : c = 'h84d598b
        7'b0b1000100 : c = 'h7551e3d
        7'b0b1000101 : c = 'h65b0db1
        7'b0b1000110 : c = 'h55f666a
        7'b0b1000111 : c = 'h4626751
        7'b0b1001000 : c = 'h3644fa3
        7'b0b1001001 : c = 'h2655ee6
        7'b0b1001010 : c = 'h165d4d5
        7'b0b1001011 : c = 'h65f150
        7'b0b1001100 : c = 'hff65f450
        7'b0b1001101 : c = 'hfe661dd1
        7'b0b1001110 : c = 'hfd66adca
        7'b0b1001111 : c = 'hfc67e413
        7'b0b1010000 : c = 'hfb6a005e
        7'b0b1010001 : c = 'hfa6d4223
        7'b0b1010010 : c = 'hf971e890
        7'b0b1010011 : c = 'hf878327b
        7'b0b1010100 : c = 'hf7805e4e
        7'b0b1010101 : c = 'hf68aa9ff
        7'b0b1010110 : c = 'hf59752f8
        7'b0b1010111 : c = 'hf4a6960f
        7'b0b1011000 : c = 'hf3b8af72
        7'b0b1011001 : c = 'hf2cdda98
        7'b0b1011010 : c = 'hf1e65236
        7'b0b1011011 : c = 'hf102502c
        7'b0b1011100 : c = 'hf0220d7b
        7'b0b1011101 : c = 'hef45c231
        7'b0b1011110 : c = 'hee6da560
        7'b0b1011111 : c = 'hed99ed0e
        7'b0b1100000 : c = 'heccace28
        7'b0b1100001 : c = 'hec007c76
        7'b0b1100010 : c = 'heb3b2a89
        7'b0b1100011 : c = 'hea7b09b7
        7'b0b1100100 : c = 'he9c04a05
        7'b0b1100101 : c = 'he90b1a23
        7'b0b1100110 : c = 'he85ba75c
        7'b0b1100111 : c = 'he7b21d8b
        7'b0b1101000 : c = 'he70ea713
        7'b0b1101001 : c = 'he6716cd0
        7'b0b1101010 : c = 'he5da960f
        7'b0b1101011 : c = 'he54a4886
        7'b0b1101100 : c = 'he4c0a847
        7'b0b1101101 : c = 'he43dd7ba
        7'b0b1101110 : c = 'he3c1f792
        7'b0b1101111 : c = 'he34d26c6
        7'b0b1110000 : c = 'he2df828b
        7'b0b1110001 : c = 'he2792648
        7'b0b1110010 : c = 'he21a2b94
        7'b0b1110011 : c = 'he1c2aa2d
        7'b0b1110100 : c = 'he172b7f3
        7'b0b1110101 : c = 'he12a68e3
        7'b0b1110110 : c = 'he0e9cf0f
        7'b0b1110111 : c = 'he0b0fa9f
        7'b0b1111000 : c = 'he07ff9c5
        7'b0b1111001 : c = 'he056d8c4
        7'b0b1111010 : c = 'he035a1e2
        7'b0b1111011 : c = 'he01c5d6d
        7'b0b1111100 : c = 'he00b11b6
        7'b0b1111101 : c = 'he001c310
        7'b0b1111110 : c = 'he00073cf
        7'b0b1111111 : c = 'he0072446
        default    :  b = 'x;
    endcase

    always_comb
    unique casez (x1)
        // begin c
        7'b0b0 : c = 'h16a09e66
        7'b0b1 : c = 'h1752c7ca
        7'b0b10 : c = 'h17ff1c9b
        7'b0b11 : c = 'h18a571c5
        7'b0b100 : c = 'h19459db3
        7'b0b101 : c = 'h19df785b
        7'b0b110 : c = 'h1a72db48
        7'b0b111 : c = 'h1affa1a1
        7'b0b1000 : c = 'h1b85a836
        7'b0b1001 : c = 'h1c04cd86
        7'b0b1010 : c = 'h1c7cf1c7
        7'b0b1011 : c = 'h1cedf6f2
        7'b0b1100 : c = 'h1d57c0c6
        7'b0b1101 : c = 'h1dba34d1
        7'b0b1110 : c = 'h1e153a76
        7'b0b1111 : c = 'h1e68baf4
        7'b0b10000 : c = 'h1eb4a16d
        7'b0b10001 : c = 'h1ef8dae6
        7'b0b10010 : c = 'h1f355652
        7'b0b10011 : c = 'h1f6a0491
        7'b0b10100 : c = 'h1f96d87a
        7'b0b10101 : c = 'h1fbbc6d6
        7'b0b10110 : c = 'h1fd8c66b
        7'b0b10111 : c = 'h1fedcff9
        7'b0b11000 : c = 'h1ffade3d
        7'b0b11001 : c = 'h1fffedf5
        7'b0b11010 : c = 'h1ffcfddc
        7'b0b11011 : c = 'h1ff20eae
        7'b0b11100 : c = 'h1fdf2326
        7'b0b11101 : c = 'h1fc44001
        7'b0b11110 : c = 'h1fa16bf6
        7'b0b11111 : c = 'h1f76afba
        7'b0b100000 : c = 'h1f4415fc
        7'b0b100001 : c = 'h1f09ab62
        7'b0b100010 : c = 'h1ec77e87
        7'b0b100011 : c = 'h1e7d9ff5
        7'b0b100100 : c = 'h1e2c2224
        7'b0b100101 : c = 'h1dd31972
        7'b0b100110 : c = 'h1d729c22
        7'b0b100111 : c = 'h1d0ac253
        7'b0b101000 : c = 'h1c9ba5f9
        7'b0b101001 : c = 'h1c2562dc
        7'b0b101010 : c = 'h1ba8168c
        7'b0b101011 : c = 'h1b23e05b
        7'b0b101100 : c = 'h1a98e156
        7'b0b101101 : c = 'h1a073c3c
        7'b0b101110 : c = 'h196f1576
        7'b0b101111 : c = 'h18d0930c
        7'b0b110000 : c = 'h182bdc9f
        7'b0b110001 : c = 'h17811b5b
        7'b0b110010 : c = 'h16d079ef
        7'b0b110011 : c = 'h161a2484
        7'b0b110100 : c = 'h155e48ac
        7'b0b110101 : c = 'h149d155f
        7'b0b110110 : c = 'h13d6bae8
        7'b0b110111 : c = 'h130b6add
        7'b0b111000 : c = 'h123b5811
        7'b0b111001 : c = 'h1166b686
        7'b0b111010 : c = 'h108dbb66
        7'b0b111011 : c = 'hfb09cec
        7'b0b111100 : c = 'hecf9260
        7'b0b111101 : c = 'hdead404
        7'b0b111110 : c = 'hd029b05
        7'b0b111111 : c = 'hc172170
        7'b0b1000000 : c = 'hb28a224
        7'b0b1000001 : c = 'ha3758bd
        7'b0b1000010 : c = 'h943818e
        7'b0b1000011 : c = 'h84d598b
        7'b0b1000100 : c = 'h7551e3d
        7'b0b1000101 : c = 'h65b0db1
        7'b0b1000110 : c = 'h55f666a
        7'b0b1000111 : c = 'h4626751
        7'b0b1001000 : c = 'h3644fa3
        7'b0b1001001 : c = 'h2655ee6
        7'b0b1001010 : c = 'h165d4d5
        7'b0b1001011 : c = 'h65f150
        7'b0b1001100 : c = 'hff65f450
        7'b0b1001101 : c = 'hfe661dd1
        7'b0b1001110 : c = 'hfd66adca
        7'b0b1001111 : c = 'hfc67e413
        7'b0b1010000 : c = 'hfb6a005e
        7'b0b1010001 : c = 'hfa6d4223
        7'b0b1010010 : c = 'hf971e890
        7'b0b1010011 : c = 'hf878327b
        7'b0b1010100 : c = 'hf7805e4e
        7'b0b1010101 : c = 'hf68aa9ff
        7'b0b1010110 : c = 'hf59752f8
        7'b0b1010111 : c = 'hf4a6960f
        7'b0b1011000 : c = 'hf3b8af72
        7'b0b1011001 : c = 'hf2cdda98
        7'b0b1011010 : c = 'hf1e65236
        7'b0b1011011 : c = 'hf102502c
        7'b0b1011100 : c = 'hf0220d7b
        7'b0b1011101 : c = 'hef45c231
        7'b0b1011110 : c = 'hee6da560
        7'b0b1011111 : c = 'hed99ed0e
        7'b0b1100000 : c = 'heccace28
        7'b0b1100001 : c = 'hec007c76
        7'b0b1100010 : c = 'heb3b2a89
        7'b0b1100011 : c = 'hea7b09b7
        7'b0b1100100 : c = 'he9c04a05
        7'b0b1100101 : c = 'he90b1a23
        7'b0b1100110 : c = 'he85ba75c
        7'b0b1100111 : c = 'he7b21d8b
        7'b0b1101000 : c = 'he70ea713
        7'b0b1101001 : c = 'he6716cd0
        7'b0b1101010 : c = 'he5da960f
        7'b0b1101011 : c = 'he54a4886
        7'b0b1101100 : c = 'he4c0a847
        7'b0b1101101 : c = 'he43dd7ba
        7'b0b1101110 : c = 'he3c1f792
        7'b0b1101111 : c = 'he34d26c6
        7'b0b1110000 : c = 'he2df828b
        7'b0b1110001 : c = 'he2792648
        7'b0b1110010 : c = 'he21a2b94
        7'b0b1110011 : c = 'he1c2aa2d
        7'b0b1110100 : c = 'he172b7f3
        7'b0b1110101 : c = 'he12a68e3
        7'b0b1110110 : c = 'he0e9cf0f
        7'b0b1110111 : c = 'he0b0fa9f
        7'b0b1111000 : c = 'he07ff9c5
        7'b0b1111001 : c = 'he056d8c4
        7'b0b1111010 : c = 'he035a1e2
        7'b0b1111011 : c = 'he01c5d6d
        7'b0b1111100 : c = 'he00b11b6
        7'b0b1111101 : c = 'he001c310
        7'b0b1111110 : c = 'he00073cf
        7'b0b1111111 : c = 'he0072446
        default    :  c = 'x;
    endcase

endmodule    
