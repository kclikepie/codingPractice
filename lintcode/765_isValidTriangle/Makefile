#!/usr/bin/make

CFLAGS+=-Wall -g

BIN=main

$(BIN):main.o
	$(CC) $(CFLAGS) $(LIB) $^ -o $@

all:$(BIN)

clean:
	-rm -f main.o $(BIN)

.PHONY: all clean


