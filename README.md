# monty
This is repo for the ALX SE project `C - Stacks, Queues - LIFO, FIFO`, where we practice stacks and queues data structures using C and the Monty language.

## The Monty language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

## Compilation & Output
Your code will be compiled with the Makefile

## The monty program

Usage: monty file
where file is the path to the file containing Monty byte code
If the user does not give any file or more than one argument to your program, print the error message USAGE: monty file, followed by a new line, and exit with the status EXIT_FAILURE
If, for any reason, it’s not possible to open the file, print the error message Error: Can't open file <file>, followed by a new line, and exit with the status EXIT_FAILURE
where <file> is the name of the file
If the file contains an invalid instruction, print the error message L<line_number>: unknown instruction <opcode>, followed by a new line, and exit with the status EXIT_FAILURE
where is the line number where the instruction appears.
Line numbers always start at 1
The monty program runs the bytecodes line by line and stop if either:
it executed properly every line of the file
it finds an error in the file
an error occured
If you can’t malloc anymore, print the error message Error: malloc failed, followed by a new line, and exit with status EXIT_FAILURE.
You have to use malloc and free and are not allowed to use any other function from man malloc (realloc, calloc, …)

##Tasks
0. push, pall
mandatory
Implement the push and pall opcodes.

The push opcode

The opcode push pushes an element to the stack.

Usage: push <int>
where <int> is an integer
if <int> is not an integer or if there is no argument given to push, print the error message L<line_number>: usage: push integer, followed by a new line, and exit with the status EXIT_FAILURE
where is the line number in the file
You won’t have to deal with overflows. Use the atoi function
The pall opcode

The opcode pall prints all the values on the stack, starting from the top of the stack.

Usage pall
Format: see example
If the stack is empty, don’t print anything

julien@ubuntu:~/monty$ cat -e bytecodes/00.m
push 1$
push 2$
push 3$
pall$

1. pint
mandatory
Score: 100.0% (Checks completed: 100.0%)
Implement the pint opcode.

The pint opcode

The opcode pint prints the value at the top of the stack, followed by a new line.

Usage: pint
If the stack is empty, print the error message L<line_number>: can't pint, stack empty, followed by a new line, and exit with the status EXIT_FAILURE
julien@ubuntu:~/monty$ cat bytecodes/06.m 
push 1
pint
push 2
pint
push 3
pint

2. pop
mandatory
Score: 100.0% (Checks completed: 100.0%)
Implement the pop opcode.

The pop opcode

The opcode pop removes the top element of the stack.

Usage: pop
If the stack is empty, print the error message L<line_number>: can't pop an empty stack, followed by a new line, and exit with the status EXIT_FAILURE
julien@ubuntu:~/monty$ cat bytecodes/07.m 
push 1
push 2
push 3
pall
pop
pall
pop
pall
pop
pall

3. swap
mandatory
Score: 100.0% (Checks completed: 100.0%)
Implement the swap opcode.

The swap opcode

The opcode swap swaps the top two elements of the stack.

Usage: swap
If the stack contains less than two elements, print the error message L<line_number>: can't swap, stack too short, followed by a new line, and exit with the status EXIT_FAILURE
julien@ubuntu:~/monty$ cat bytecodes/09.m 
push 1
push 2
push 3
pall
swap
pall:


4. add
Implement the add opcode.

The add opcode

The opcode add adds the top two elements of the stack.

Usage: add
If the stack contains less than two elements, print the error message L<line_number>: can't add, stack too short, followed by a new line, and exit with the status EXIT_FAILURE
The result is stored in the second top element of the stack, and the top element is removed, so that at the end:
The top element of the stack contains the result
The stack is one element shorter
julien@ubuntu:~/monty$ cat bytecodes/12.m 
push 1
push 2
push 3
pall
add
pall

5. nop

Implement the nop opcode.

The nop opcode

The opcode nop doesn’t do anything.

Usage: nop

Task 0 - 5 are mandatory task
