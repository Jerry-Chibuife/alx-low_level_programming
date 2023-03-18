#include <stdio.h>

/**
 * main - Entry point for program
 * Description: Prints all possible combinations for single digits
 * Return: 0 for successful program exit
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
