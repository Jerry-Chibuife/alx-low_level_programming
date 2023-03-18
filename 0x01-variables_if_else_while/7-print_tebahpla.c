#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point into program
 * Description: Print lowercase letters in reverse order
 * Return: 0 for successful program exit
 */
int main(void)
{
	int x;

	for (x = 'Z'; x >= 'A'; x--)
	{
		putchar(tolower(x));
	}
	putchar('\n');
	return (0);
}
