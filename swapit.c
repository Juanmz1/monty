#include "monty.h"
/**
 * my_swap - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void my_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int i = 0, temp;

	h = *head;
	while (h)
	{
		h = h->next;
		i++;
	}
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	temp = h->n;
	h->n = h->next->n;
	h->next->n = temp;
}	
