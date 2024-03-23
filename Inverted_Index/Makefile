OBJ:=$(patsubst %.c, %.o, $(wildcard *.c))
dlist.exe : $(OBJ)
	gcc -o $@ $^

clean :
	rm *.exe *.o
