#include "main.h"

/**
 * print_sign - print sign of a number
 *
 * @n: The input number is an integer
 *
 * Return: 1 is greater than zero
 * 0 is zero
 * -1 is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
		return (1);
	if (n < 0)
		return (0);
	else
		return (-1);
	_putchar('\n');
}
