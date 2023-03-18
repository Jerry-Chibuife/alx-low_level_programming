#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point of program
 * Description: Prints all lower and 
 * uppercase letters
 * Return: 0 for successful program exit
 */
int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(toupper(x));
	}
	putchar('\n');
	return (0);
}
