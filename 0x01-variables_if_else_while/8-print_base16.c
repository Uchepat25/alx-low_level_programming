#include <stdio.h>
/**
 * main - program entry point
 * Return: 0 if no error, non zero if error
 */
int main(void);
{
	int num;
	char la;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (la = 'a'; la <= 'f'; la++)
		putchar(la);

	putchar('\n');
	return (0);
}
