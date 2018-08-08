INC_DIR=headers
CC=gcc
CFLAGS=-I$(INC_DIR)


SRC = source/test.c


test:
	$(CC) -o test $(SRC) $(CFLAGS)
