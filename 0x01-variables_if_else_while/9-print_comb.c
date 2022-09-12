#include <stdio.h>
/**
 * main - start
 *
 *Return: 0
 */
int main(void)
{
	int d;

	for (d = 'o'; d <= '9'; d++)
	{
		putchar(d);
		if (d != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
