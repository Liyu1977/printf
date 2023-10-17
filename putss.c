#include "main.h"
/**
*putss - print string
*
*@c: string
* return: number of bytes.
*/
int putss(char *c)
{
int count = 0;

if(c)
{
for (count = 0; c[count] != '\0'; count++)
{
ptchar(c[count]);
}
}
return (count);
}
