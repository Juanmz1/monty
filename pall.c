#include "monty.h"
/**
 * my_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void my_pall(stack_t **head, unsigned int counter)
{
	stack_t *temp = *head;
	(void)counter;

	if (temp == NULL)
		return;
	while(temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
