#include <stdio.h>

#include "main.h"

/**
 * main - returns the largest of 3 numbers
 * largest_number - returns the largest of 3 numbers
 * Return: largest number
 */
int main(void)
{

	int a, b, c;
	int largest;

	a = 972;
	b = -98;
	c = 0;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else if (c >= a && c >= b)
	{
		largest = c;
	}

	return (largest);
}
