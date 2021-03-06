#include "monty.h"

/**
 * inventory_structure - create global struct for variables
 *
 * Return: 1 or 0
 */
int inventory_structure(void)
{
	inventory = malloc(sizeof(inventory_t));
	if (!inventory)
		handle_errors(ERROR_MALLOC);
	inventory->input = malloc(sizeof(char *) * 3);
	if (!inventory->input)
	{
		free(inventory);
		handle_errors(ERROR_MALLOC);
	}
	inventory->stack = NULL;
	inventory->line = NULL;
	inventory->line_num = 0;
	inventory->order = LIFO;
	return (EXIT_SUCCESS);
}
