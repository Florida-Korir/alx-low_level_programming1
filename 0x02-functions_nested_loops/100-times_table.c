#include "main.h"
/**
 * print_times_table - function
 *
 * @n: parameter
 *
 * Return: end program
 */
void print_times_table(int n)
{
	int n, a, m, p;
	int c = 1;

	for (m = 0; m <= n; m++)
	{
		for (a = 0; a <= n; n++)
		{
			p = m * a;
			if (c == 0 && p < 10)
			{
				printf(",   %d", p);
			}
			else if (c == 0 && p < 100)
			{
				printf(",  %d", p);
			}
			else if (c == 0 && p < 1000)
			{
				printf(", %d", p);
			}
			else
			{
				printf("%d", p);
			}
			c = 0;
		}
		putchar(10);
		c = 1;
	}
}