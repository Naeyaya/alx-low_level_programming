#include"main.h"
/*
 *  print_alphabet - entry point
 *  Description - prints small letter alphabets
 *  Return: ALways 0
 */
void print_alphabet(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
