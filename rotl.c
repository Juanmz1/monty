#include "monty.h"
/**
  *rotl- rotates the stack to the top
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *new, *temp;
	
	new = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	temp = (*head)->next;
	temp->prev = NULL;
	while (new->next != NULL)
	{
		new = new->next;
	}
	new->next = *head;
	(*head)->next = NULL;
	(*head)->prev = new;
	(*head) = temp;
}
