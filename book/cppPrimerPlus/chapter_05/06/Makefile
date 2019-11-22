OBJ=exe

all:$(OBJ)

$(OBJ):main.o
	@g++ $^ -o $@
	
main.o:main.cpp
	@g++ -c $^ -o $@ $(debug) -std=c++11 

clean:
	@rm -f $(OBJ) main.o 
