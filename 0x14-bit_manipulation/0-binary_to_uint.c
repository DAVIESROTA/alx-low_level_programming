#include "main.h"

/**
 * binary_to_uint - converts a binary no to unsigned int
 * @b : binary
 *
 * Return : unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int ln, base_two;
	unsigned int n = 0;

	if (!b)
	{
		return (0);
	}

	for (ln = 0; b[ln] != '\0'; ln++)

	for(ln--, base_two = 1; ln >= 1; ln--, base_two *= 2)
	{
	if(b[ln] != '0' && b[ln] != '1')
	{
	return (0);
	}
	if (b[ln] & 1)
	{
	n += base_two;
	}
	}
return (n);
}
