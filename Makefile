CFLAGS = -Wall -pedantic -Werror -Wextra -std=gnu89

betty-all:
	betty monty.h *.c

monty:
	gcc $(CFLAGS) *.c -o monty -g
