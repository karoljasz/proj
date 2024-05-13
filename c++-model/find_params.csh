A=28
for A in {22..22}
do
B=28
for B in {17..17}
do
C=28
for C in {11..11}
do
M=`expr $A + $B + $C`
echo "RUN A=$A  B=$B  C=$C  M=$M"
make DBG_TST=1 A_F_make=$A B_F_make=$B C_F_make=$C clean all run | egrep y_err | cut -d'=' -f2 > err.dat

done
done
done
