make DBG_TST=1 A_F_make=10 B_F_make=10 C_F_make=28 clean all run | egrep y_err | cut -d'=' -f2 > err.dat
