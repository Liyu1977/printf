#include "main.h"
/**
 * _printf - prints to the standardout formatted text.
 *
 * @format: format specifier.
 * return : number of byte printed.
 */

int _printf(const char *format, ...)
{
unsigned int i, s_count, count = 0;
va_list args;
if (!format || (format[0] == '%' && format[1] == '\0'))
return (-1);
va_start(args, format);

for (i = 0; format[i] != '\0'; i++)
{
if (format[i] != '%')
{
ptchar(format[i]);
}
else if (format[i + 1] == 'c')
{
ptchar(va_arg(args, int));
i++;
}
else if (format[i + 1] == 's')
{
s_count = putss(va_arg(args, char *));
i++;
count += (s_count - 1);
}
else if (format[i + 1] == '%')
{
ptchar('%');
}
count += 1;
}

va_end(args);
return (count);

}
