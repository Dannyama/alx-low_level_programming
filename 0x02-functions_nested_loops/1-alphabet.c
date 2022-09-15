#include "main.h"


/**
 * print_alphabet - print the alphabets
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
_putchar('\n');
}
