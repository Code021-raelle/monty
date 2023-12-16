#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack
 * @stack: double pointer to the top of the stack
 * @line_number: line number where the opcode appears
 *
 * Description: prints the string starting at the top of the stack
 * The integer stored in each element of the stack is treated as the ASCII
 * value of the character to be printed.
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int ascii_value;

	if (*stack == NULL)
	{
		printf("\n");
		return;
	}

	temp = *stack;

	while (temp != NULL)
	{
		ascii_value = temp->n;

		if (ascii_value < 0 || ascii_value > 127)
		{
			fprintf(stderr, "L%d: can't pstr, value out of range\n", line_number);
			exit(EXIT_FAILURE);
		}

		putchar(ascii_value);
		temp = temp->next;
	}

	printf("\n");
}

