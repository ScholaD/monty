#include "monty.h"
/**
 * f_queue - prints the top
 * @head: stack head
 * @current: line_number
 * Return: no return
*/
void f_queue(stack_t **head, unsigned int current)
{
	(void)head;
	(void)current;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @num: new_value
 * @head: head of the stack
 * Return: no return
*/
void addqueue(stack_t **head, int num)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->num = num;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
