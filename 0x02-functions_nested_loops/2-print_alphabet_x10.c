#include "main.h"

/**
* print_alphabet_x10 - prints alphabet in lowercase 10 times
*
* Return: Always 0.
*/

void print_alphabet_x10(void)
{
	int i = 0;
	char a;

	while (i < 10)
	{
		a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
