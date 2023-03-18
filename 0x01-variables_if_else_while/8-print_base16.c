#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point of program
 * Description: prints all characters of base 16
 * Return: 0 for successful program exit
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
	}
	for (x = 'A'; x <= 'F'; x++)
	{
		putchar(tolower(x));
	}
	putchar('\n');
	return (0);
}
