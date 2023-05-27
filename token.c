#include "monty.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @counter: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", my_push}, {"pall", my_pall}, {"pint", my_pint},
				{"pop", my_pop},
				{"swap", my_swap},
				{"add", my_add},
				{"nop", my_nop},
				{"sub", my_sub},
				{"div", my_divit},
				{"mul", my_mul},
				{"mod", my_mod},
				{"pchar", my_pchar},
				{"pstr", my_pstr},
				{"rotl", my_rotl},
				{"rotr", my_rotr},
				{"stack", my_stack},
				{"queue", my_queue},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *str;

	str = strtok(content, " \n\t");
	if (str && str[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && str)
	{
		if (strcmp(str, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (str && opst[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", counter, str);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
