#include "main.h"

/**
 * -sign - prints the sign of a number'
 *  @c: function parameter to print a sign of a number'
 *  Return:0
 */
int print_sign(int n)
{
	if (n > 0 )
	{
		return (+1);
	}
	else if ( n < 0)
	{
		return (-1);
	}
	else
		return (0);

}
