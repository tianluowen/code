CurPath := $(PWD)

CC=clang++
STD=-std=c++11
RM=rm -f

OBJ=exe
OBJS=main.o test.o

INCPATH = -I.

all:${OBJ}

$(OBJ): ${OBJS}
	@echo -e "\nBuilding ${OBJ}"
	${CC} ${OBJS} -o $@
	
%.o: %.cpp                                   
	@echo "compiling $<"                     
	${CC} -c -o $@ $< ${STD} ${debug} 

clean:
	${RM} ${OBJ} ${OBJS}

debug:
	@echo "CurPath: ${CurPath}"
	@echo "CC: ${CC}"
	@echo "STD: ${STD}"
	@echo "INCPATH: ${INCPATH}"
	@echo "RM: ${RM}"
	@echo "OBJ: ${OBJ}"
	@echo "OBJS: ${OBJS}"
	@echo "debug_mode: debug=-g"
