#include "monty.h"
/**
  *my_rotr - rotates the stack to the bottom
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void my_rotr(stack_t **head, unsigned int counter)
{
	stack_t *new;
	(void)counter;

	new = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (new->next)
	{
		new = new->next;
	}
	new->next = *head;
	new->prev->next = NULL;
	new->prev = NULL;
	(*head)->prev = new;
	(*head) = new;
}
