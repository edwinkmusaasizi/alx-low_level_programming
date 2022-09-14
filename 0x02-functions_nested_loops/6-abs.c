#include "main.h"
#include <stdio.h>
/**
 * _abs -function that computes the absoute value of an integer
 * @c: is hthe int that will use the argument of the function
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
