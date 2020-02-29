CC=clang++
RM=rm -f
OBJ=exe exetest

all:$(OBJ)

exe:main.o
	$(CC) $^ -o $@

exetest:maintest.o
	$(CC) $^ -o $@
	
main.o:main.cpp
	$(CC) -c $^ -o $@ -std=c++11 $(debug)

maintest.o:maintest.cpp
	$(CC) -c $^ -o $@ -std=c++11 $(debug)

clean:
	$(RM) $(OBJ) *.o  
