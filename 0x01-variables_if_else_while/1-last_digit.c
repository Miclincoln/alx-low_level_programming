#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - entry point
 *
 * Return: always 0
 *
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
	{
		printf("The last digit of %d is %d and i greater than 5", n, last);
	}
	else if (last == 0)
	{
		printf("The last digit of %d is %d and is 0", n, last);
	}
	else if (last < 6 && last > 0)
	{
		printf("The last digit of %d is %d and is less than 6 and not 0", n, last);
	}
	/* your code goes there */
	return (0);
