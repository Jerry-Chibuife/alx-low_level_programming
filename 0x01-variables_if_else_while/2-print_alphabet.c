#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point of program
 * Description: Prints lowercased alphabets
 * Return: 0 for successful program exit
 */
int main(void)
{
	for(int x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	putchar('\n');
	return (0);
}
