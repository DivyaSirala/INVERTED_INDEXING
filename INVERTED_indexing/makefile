SRJ := $(wildcard *.c)
OBJ := $(patsubst %.c,%.o,$(SRJ))
a.out : $(OBJ)
	gcc -o $@ $(OBJ) -Will
clean:
	rm *.o *.exe

