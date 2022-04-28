fbc -c gx.bas
gcc -c $1 -o $1.o
fbc $1.o gx.o gfx.bas -x $1.out

