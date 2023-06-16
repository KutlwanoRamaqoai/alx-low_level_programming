#include <stdio.h>
/**
 *main - Entry point
 *Discription: 'prints all possible combinations of two two-digit numbers'
 *Return: always 0
 */
int main(void)
{
	int firstdigit = 0, secondDigit;

	while (firstdigit <= 99)
	{
		secondDigit = firstdigit;
		while (secondDigit <= 99)
		{
			if (secondDigit != firstdigit)
			{
				putchar((firstdigit / 10) + 48);
				putchar((firstdigit % 10) + 48);
				putchar(' ');
				putchar((secondDigit / 10) + 48);
				putchar((secondDigit % 10) + 48);

				if (firstdigit != 98 || secondDigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			secondDigit++;
		}
		firstdigit++;
	}
	putchar('\n');
	return (0);
}
