#include "monty.h"

/**
  * nop - Does nothing
  * @stack: The head of the stack
  * @line_number: Line number of the command in the bytecode file
  *
  * Return: Nothing
  */
void nop(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
	(void) stack;
}
