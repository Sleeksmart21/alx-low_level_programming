#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @b: pointer to change
 * @on: string to change pointer to
 * Return: void
 */

void set_string(char **b, char *on)
{
	*b = on;
}
