#include "main.h"
#include <ctype.h>

/**
 * main - Entry point of program
 * print_alphabet - prints all alphabet in lowercase
 * Return: 0 for successful program exit
 */
void print_alphabet(void)
{
	int x;

	for (x = 'A'; x < 'Z'; x++)
	{
		_putchar(tolower(x));
	}
	_putchar('\n');
}
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}
