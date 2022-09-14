#include "main.h"


/**
 * print_alphabet - print the alphabets
 *
 * Return: Always 0.
 */

woid print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}

	_putchar('\n');
}	
