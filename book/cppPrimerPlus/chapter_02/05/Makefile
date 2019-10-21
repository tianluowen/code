OBJ=exe

all:$(OBJ)

exe:main.o
	@g++ main.o -o $(OBJ)
	
main.o:main.cpp
	@g++ -c $^ -o main.o

clean:
	@rm -f $(OBJ) main.o 

