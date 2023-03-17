#include <stdio.h>

/**
 * main - Prints alphabet in lowewrcase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alp[27] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 'a'; i <= 27; i++)

		putchar(i);

	putchar('\n');
	return (0);
}
