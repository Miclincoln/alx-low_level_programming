#include <stdio.h>

/**
* main - entry point
*
* Return: always 0
*/

int main(void)

{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i > 0)
		{
			putchar(',');

			putchar(' ');
		}

		putchar(i + '0');

	}

	putchar('\n');

	return (0);
}
