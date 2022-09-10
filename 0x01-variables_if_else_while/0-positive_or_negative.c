#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print if the number is positive, zero, or negative
 * Description:use main function
 *Program prints Programming is positive, zero, or negative
 *Return: 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if  (n>0)
	{
		printf("%i is positive\n" , n);
	}
	else if (n<0)
	{
		printf("%i is negative\n" , n);
	}
	return (0);
}
