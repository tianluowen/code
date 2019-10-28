OBJ=exe

all:$(OBJ)

$(OBJ):main.o
	@g++ $^ -o $@
	
main.o:main.cpp
	@g++ -c $(d) $^ -o $@ 

clean:
	@rm -f $(OBJ) main.o 
