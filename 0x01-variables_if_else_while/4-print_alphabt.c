#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point of program
 * Description: Prints all alphabets in lowercase
 * except q and e
 * Return: 0 for successful program exit
 */
int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		if (tolower(x) != 'q' && tolower(x) != 'e')
		{
			putchar(tolower(x));
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
