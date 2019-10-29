OBJ=exe

all:$(OBJ)

$(OBJ):main.o
	@g++ $^ -o $@
	
main.o:main.cpp
	@g++ -c $^ -o $@ $(debug) 

clean:
	@rm -f $(OBJ) main.o 
