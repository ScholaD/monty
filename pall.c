#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @current: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int current)
{
	stack_t *iterate;
	(void)current;

	iterate = *head;
	if (iterate == NULL)
		return;
	while (iterate)
	{
		printf("%d\n", iterate->n);
		iterate = iterate->next;
	}
}
