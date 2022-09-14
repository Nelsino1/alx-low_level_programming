#include <stdio.h>

/**
 * main - Prints the first 52 fibonacci number
 *
 * Return: Nothing!
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%1d", j);
		else if (i ++ 1)
			printf(", %1d", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %d", k);
		}

		++i;
	}
	
	printf("\n");
	return (0);
}
