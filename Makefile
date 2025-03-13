EXE=prog.out
CC=g++
FLAGS=-Wall -g

INCLUDE=include
SRC=src
BIN=build

all: main.o fonction.o
	@mkdir -p ${BIN}
	${CC} ${FLAGS} ${BIN}/*.o -o ${EXE}

main.o : ${SRC}/main.cpp
	@mkdir -p ${BIN}
	${CC} ${FLAGS} -I $(shell pwd)/${INCLUDE} ${SRC}/main.cpp -o ${BIN}/main.o -c

fonction.o : ${SRC}/fonction.cpp
	@mkdir -p ${BIN}
	${CC} ${FLAGS} -I $(shell pwd)/${INCLUDE} ${SRC}/fonction.cpp -o ${BIN}/fonction.o -c

clean :
	rm -f ${EXE} ${BIN}/*.o

run :
	make && echo "\n==== ${EXE} ====\n" && ./${EXE}