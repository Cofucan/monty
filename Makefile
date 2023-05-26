CFLAGS = -Wall -pedantic -Werror -Wextra -std=gnu89

betty-all:
	betty monty.h *.c

montys:
	gcc $(CFLAGS) *.c monty.h -o monty -g

tests:
	for file in monty_files/*; do \
		echo "Testing bytecodes for: $$file"; \
		./monty $$file; \
	done
