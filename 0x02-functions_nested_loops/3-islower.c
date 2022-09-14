#include "main.h"

/**
 *
 * _islower - main function
 *
 * _islower - checks for lowercase character
 *
 * @c: the character to check
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
