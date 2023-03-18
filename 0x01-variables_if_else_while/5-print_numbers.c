#include <stdio.h>

/**
 * main - Entry point of program
 * Description: Prints all single digits in base 10
 * Return: 0 for successful program exit
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		printf("%d", x);
	}
	putchar('\n');
	return (0);
}
