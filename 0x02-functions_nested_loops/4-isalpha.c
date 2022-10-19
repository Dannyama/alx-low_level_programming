#include "main.h"

/**
 * _isalpha.c - main function
 *
 * @c: chareacter to campare 
 *
 * Return: 1 if true, 0 if false
 *
 */

int _isalpha(int c);
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return(1);

	}
	return(0);
}
 
