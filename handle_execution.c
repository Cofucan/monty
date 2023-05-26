#include "monty.h"

/**
  * handle_execution - Manages the operations to be executed by the interpreter
  * @op_code: The operation code to execute.
  * @data: The data that comes with the instruction.
  * @line: The line on which the error occurred
  * @meth_status: The method to be used by the interpreter
  *
  * Return: 0 if the operation was successful or errcode if its invalid.
  */

int handle_execution(char *op_code, char *data, unsigned int line, int meth_status)
{
	int status_op = 0;
	void (*opcode_function)(stack_t **, unsigned int);

	if (strcmp(op_code, "stack") == 0)
		return (METH_STACK);
	else if (strcmp(op_code, "queue") == 0)
		return (METH_QUEUE);

	opcode_function = select_op(op_code);
	if (opcode_function)
	{
		if (strcmp(op_code, "push") == 0)
		{
			status_op = check_push_data(data);
			if (status_op == ERR_PUSH)
				return (ERR_PUSH);

			if (meth_status != 0 && meth_status == METH_QUEUE)
				opcode_function = select_op("push_queue");

			opcode_function(&head, atoi(data));
		}
		else
			opcode_function(&head, line);

		return (meth_status);
	}

	return (ERR_INVALID);
}
