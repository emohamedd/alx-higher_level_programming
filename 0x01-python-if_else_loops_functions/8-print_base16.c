#include <stdio.h>
/**
  *main - entry point
  *Description: Tasksof the 0x01-variables_if_else_while
  *Return: always 0
  */
int main(void)
{
	int i = 0;
	char c = 'a';

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
