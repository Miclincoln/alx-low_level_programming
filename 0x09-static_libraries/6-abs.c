#include "main.h"

/**
* _abs - A function that computes the absolute value of an interger
* @i: function argument.
* Return: Returns int.
**/

int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	else
	{
		return (i);
	}
}
