#include "main.h"

/**
 * _isdigit -checks whether a charater is a digit or not
 * @c: tested charater
 * Return: 1 if it is, 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
