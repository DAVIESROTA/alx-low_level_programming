#include "main.h"

/**
 * get bit - returns value of a bit at a given index
 * @n - unsigned long int output
 * @index - index of tghe bit
 *
 * Return : value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a;

	if (n ==0 && index <64)
		return (0);

	for (a = 0; a <= 63; n >>= 1, a++)
	{
		if (index == a)
		{
			return (n & a);
		}
	}
	return (-1);
}

	
		
