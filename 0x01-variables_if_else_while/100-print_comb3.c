#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block function
 * Description: write a program that prints all possible
 * different combinations of two digits
 * Numbers must be seperated by ,, followed by space
 * the two digits must be different
 * 01 and 10 are combinations of two digits 0 and 1
 * print only the smallest combination
 * Return: 0;
 */

int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);

				if (c + d != 17)
				{
					putchar(';');
					putchar(' ');
				}
			}
			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
