#!/bin/bash

mkdir -p ../delivery

COMPILER="gcc"
EXEC_NAME="Coop"
CFLAGS="-g -ansi -pedantic -Wall -Wextra -Werror -c -I../includes"
LDFLAGS="-g -ansi -pedantic -o ../delivery/$EXEC_NAME"


SRCS=`ls ../src/*.c`


for src in $SRCS; do
	echo "$COMPILER $CFLAGS $src"
	eval "$COMPILER $CFLAGS $src"
	mv *.o ../delivery
done

echo "$COMPILER $LDFLAGS ../delivery/*.o"
eval "$COMPILER $LDFLAGS ../delivery/*.o"
