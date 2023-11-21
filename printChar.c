#include "main.h"

/** 
 * _printChar - Prints a single character
 * @c: The character to be printed
 * Return: A character
 */
int _printChar(char c)
{
	return write(STDOUT_FILENO, &c, 1);
}
