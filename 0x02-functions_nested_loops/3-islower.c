#include "main.h"

/**
* _islower - Checks for lower character.
* @c: Function argument
* Return: Always 0.
*/

int _islower(int c)
{
	if (c > 96 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
