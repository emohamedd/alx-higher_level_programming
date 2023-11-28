#include <stdio.h>
/**
  *main - entry point for the program
  *Description: Tasks 11 and 12 of the 0x01-variables_if_else_while
  *Return: always 0 (success)
  */
int main(void)
{
	int i = 0;
	int j = 0;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			if (j > i)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
