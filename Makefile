CC=g++
CFLAGS=-c -Wall

all: result

result: main.o Board.o Queen.o
	$(CC) main.o Board.o Queen.o -o main

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

Board.o: Board.cpp
	$(CC) $(CFLAGS) Board.cpp

Queen.o: Queen.cpp
	$(CC) $(CFLAGS) Queen.cpp

clean:
	rm -rf *.o result
