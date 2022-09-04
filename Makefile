CC = gcc
CFLAGS = -Wall -Wextra -g -fsanitize=address

BUILD_DIR = build

SOURCE_DIR = src
OBJECTS_DIR = ${BUILD_DIR}/objs

SRC = $(wildcard ${SOURCE_DIR}/*.c)
OBJ = $(patsubst ${SOURCE_DIR}/%.c, ${OBJECTS_DIR}/%.o, ${SRC})

BIN = main
EXEC = ${BUILD_DIR}/${BIN}

all: dir ${EXEC}

dir:
	mkdir -p ${BUILD_DIR}
	mkdir -p ${OBJECTS_DIR}

${EXEC}: ${OBJ}
	${CC} ${CFLAGS} $^ -o $@

${OBJECTS_DIR}/%.o: ${SOURCE_DIR}/%.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -rf ${BUILD_DIR}

.PHONY: all clean
