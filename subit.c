#include "monty.h"
/**
  *sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void sub(stack_t **head, unsigned int counter)
{
	stack_t *new;
	int subt, nodes;

	new = *head;
	for (nodes = 0; new != NULL; nodes++)
		new = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	new = *head;
	subt = new->next->n - new->n;
	new->next->n = subt;
	*head = new->next;
	free(new);
}
