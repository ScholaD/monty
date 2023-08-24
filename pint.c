#include "monty.h"
/**
 * f_pint - prints the top
 * @head: stack head
 * @current: line_number
 * Return: no return
*/
void f_pint(stack_t **head, unsigned int current)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", current);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
