#include <stdio.h>

/**
 * main - Entry point of program
 * Description: Prints numbers from 0-9
 * Return: 0 for successful program exit
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
