CC=clang++
RM=rm -f
OBJ=exe exetes

all:$(OBJ)

$(OBJ):*.o
	$(CC) $^ -o $@
	
main.o:main.cpp
	$(CC) -c $^ -o $@ -std=c++11 $(debug)

mainteset.o:maintest.cpp
	$(CC) -c $^ -o $@ -std=c++11 $(debug)

clean:
	$(RM) $(OBJ) *.o  
