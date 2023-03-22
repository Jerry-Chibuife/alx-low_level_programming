#include <stdio.h>

/**
 * main - Entry point of program
 * Description: Prints _putchar to the console
 * Return: 0 for a successful program exit
 */
int main(void)
{
	char array[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};
	int x;

	for (x = 0; x < 9; x++)
	{
		putchar(array[x]);
	}
	return (0);
}
