#include "main.h"

/*
 * ptchar - print a character
 * @c: char input
 * return: 1
 */
int ptchar(char c)
{
        return (write(1, &c, 1));
}
