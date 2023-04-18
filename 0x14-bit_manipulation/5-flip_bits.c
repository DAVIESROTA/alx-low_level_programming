#inlude "main.h"

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nobits;

	for (nobits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nobits++;
	}

	return (nobits);
}
