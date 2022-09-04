CC = gcc
CFLAGS = -Wall -Wextra -g -fsanitize=address

SRC = src/main.c
OBJ = ${SRC:.c=.o}

all: build

build: src/main.o
	${CC} ${CFLAGS} $^ -o $@

clean:
	${RM} ${OBJ}
	${RM} build

.PHONY: all clean
