#include <stdio.h>
/**
 * main - print the largest prime factor of the
 * number 621852475143
 * Return: (0)
 */
int main(void)
{
	long int i;
	long int n;
	long int d;

	n = 621852475143;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			if (n == i)
			{
				printf("%1d\n", i);
				break;
			}
			d = n / i;
			n = d;
		}
	}

	return (0);
}
