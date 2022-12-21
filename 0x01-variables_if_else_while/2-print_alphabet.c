#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}	
	putchar('\n');
	return (0);
}
