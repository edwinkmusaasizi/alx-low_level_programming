#include <stdio.h>
/**
 * main - print lowercase alphabet
 * Description: use main function
 * this program prints lowercase alphabet
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putcar('\n');
	return (0);
}
