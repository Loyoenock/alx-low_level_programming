#include "main.h"

/**
 *  binary_to_uint - function that converts a binary number to an unsigned int
 *  @b: string pointer to 1 & 0
 *
 *  Return:c onverted num, else 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int bi_num = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		bi_num = 2 * bi_num + (b[i] - '0');
	}
	return (bi_num);
}
