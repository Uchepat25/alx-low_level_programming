#include <stdio.h>
/**
 * main - Entry point
 * avoid:parameter
 * Return: 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == '9')
			continue;
		putchar(i);
		}
	putchar('\n');
	return (0);
}
