#include "main.h"

/*
 * putchar - print a character
 * @c: char input
 * return: 1
 */
int putchar(char c)
{
	return (write(1, &c, 1));
}
