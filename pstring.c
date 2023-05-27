#include "monty.h"
/**
 * my_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void my_pstr(stack_t **head, unsigned int counter)
{
	stack_t *new;
	(void)counter;

	new = *head;
	while (new)
	{
		if (new->n > 127 || new->n <= 0)
		{
			break;
		}
		printf("%c", new->n);
		new = new->next;
	}
	printf("\n");
}
