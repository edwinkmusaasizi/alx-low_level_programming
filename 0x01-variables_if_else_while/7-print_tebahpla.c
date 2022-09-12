#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - start point
 *
 * Return: 0
 */
int main(void)
{
	char h;

	for (h = 'z' ; h >= 'a'; h--)
	{
		putchar(h);
	}
	putchar('\n');

	return (0);
}
