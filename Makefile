CC = gcc

all:
	$(CC) main.c lexer.c -o lexer

run:
	./lexer

clean:
	rm -f lexer