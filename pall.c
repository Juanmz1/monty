#include "monty.h"
/**
 * pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void pall(stack_t **head, unsigned int counter)
{
	stack_t *new;
	(void)counter;

	new = *head;
	if (new == NULL)
		return;
	while(new)
	{
		printf("%d\n", new->n);
		new = new->n;
	}
}
