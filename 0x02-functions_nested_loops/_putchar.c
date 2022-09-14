#include <unistd.h>

/**
 * -putchar - writes the character c to stdout
 *  @c: The character to print
 *  Return: on success 1 
 *  )n erroe, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
