#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints all possible combinations of two two-digit numbers.
 * Return: 0 (success)
 */
int main(void)
{
	int a, c;

	for (a = 0; a < 100; a++)
	{
		for (c = 0; c < 100; c++)
		{
			if (a < c)
			{
				putchar((a / 10) + 48);
				putchar((a % 10) + 48);
				putchar(' ');
				putchar((c / 10) + 48);
				putchar((c % 10) + 48);
				if (a != 98 || c != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
