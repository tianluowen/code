CC=clang++
RM=rm -f
OBJ=exe

all:$(OBJ)

$(OBJ):main.o
	$(CC) $^ -o $@
	
main.o:main.cpp
	$(CC) -c $^ -o $@ -std=c++11 $(debug)

clean:
	$(RM) $(OBJ) main.o 
