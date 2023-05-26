#include "monty.h"
/**
 * push - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void push(stack_t **head, unsigned int counter)
{
	int loc, i = 0;
	int flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			i++;
		for (i = 0; bus.arg[j] != '\0'; i++)
			flag = 1;
		if (flag == 1)
		{
			fprintf(stderr,"L%d: Usuage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr,"L%d: Usuage: push integer\n", counter);
                        fclose(bus.file);
                        free(bus.content);
                        free_stack(*head);
                        exit(EXIT_FAILURE);
	}
	loc = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, loc);
	else
		addqueue(head, loc);
}
