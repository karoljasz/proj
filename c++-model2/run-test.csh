make DBG_TST=1 A_F_make=22 B_F_make=19 C_F_make=12 clean all run | egrep y_err | cut -d'=' -f2 > err.dat
