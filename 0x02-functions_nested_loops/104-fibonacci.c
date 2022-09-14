#include <stdio.h>


/**
 * numLength - return the lenth of string
 * @num : operand number
 * Return: number of digits
 */

int numLength(int num)
{
	int legth = 0;

	if (!num)
	{
		return (1);
	}

	while (num)
	{
		num = num / 10;
		length += 1;
	}

	return (length);
}
/**
 * *main - prints the first 98 fibonaci sequences
 * Return: 0
 */

int main(void)
{
	unsigned long f1 = 1, f2, = 2, tmp, mx = 100000000, flo = 0, f2o = 0, tmpo = 0;
	short int i = 1, initial0s;

	while (i <= 98)
	{
		if (flo > 0)
			printf("%lu", flo);
		initial0s = numLength(mx) - 1 - numLength(f1);
		while (flo > 0 && initial0s > 0)
		{
			printf("%i", 0);
			initial0s--;
		}
		printf("%lu", fl);

		tmp = (f1 + f2) % mx;
		tmpo = f1o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f20;
		f2 = tmp;
		f20 = tmpo;

		if (i != 98)
			printf(", ");
		else
			printf("\n");
		i++;
	}
	return (0);
}
