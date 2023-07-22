CC=clang++
RM=rm -f
OBJ=exe exe2

all:$(OBJ)

exe:main.o
	$(CC) $^ -o $@
	
exe2:main2.o
	$(CC) $^ -o $@

main.o:main.cpp
	$(CC) -c $^ -o $@ -std=c++11 $(debug)

main2.o:main2.cpp
	$(CC) -c $^ -o $@ -std=c++11 $(debug)

clean:
	$(RM) $(OBJ) main.o main2.o
