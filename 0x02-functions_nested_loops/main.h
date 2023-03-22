#include <unistd.h>
#include <ctype.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void);
int _putchar(char c);

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
	int x;

	for (x = 'A'; x < 'Z'; x++)
	{
		_putchar(tolower(x));
	}
	_putchar('\n');
}
