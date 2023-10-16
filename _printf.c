#include "main.h"
/**
 * _printf - prints to the standardout formatted text.
 *
 * @format: format specifier.
 * return :number of bytes printed.
 */

int _printf(const char *format, ...)
{
va_list args;
va_start(args, format);

int charCount = 0;

while (*format)
{
if (*format != '%') 
{
putchar(*format);
charCount++;
}
else
{
format++;
if (*format == 'c')
{
char c = va_arg(args, int);
putchar(c);
charCount++;
}
else if (*format == 's')
{
char *str = va_arg(args, char *);
while (*str)
{
putchar(*str);
charCount++;
str++;
}
}
else if (*format == '%')
{
putchar('%');
charCount++;
}
}
format++;
}

va_end(args);
return charCount;
}

int main(void)
{
int count = _printf("Hello, %s! My favorite character is %c. This is a %%.\n", "World", 'A');
printf("Characters printed: %d\n", count);
return (0);
}
