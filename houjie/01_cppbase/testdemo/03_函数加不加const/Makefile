CC=clang++
RM=rm -f
OBJ=exe exeNoConst

all:$(OBJ)

exe:main.o
	$(CC) $^ -o $@
	
exeNoConst:mainNoConst.o
	$(CC) $^ -o $@

main.o:main.cpp
	$(CC) -c $^ -o $@ -std=c++11 $(debug)

mainNoConst.o:mainNoConst.cpp
	$(CC) -c $^ -o $@ -std=c++11 $(debug)

clean:
	$(RM) $(OBJ) main.o 
