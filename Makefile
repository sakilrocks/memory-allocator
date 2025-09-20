CC = gcc
CFLAGS = -Wall -Wextra -g
SRC = src/allocator.c src/test.c
OUT = test_allocator

all:
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)
