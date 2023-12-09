#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - a function that produces output according to a format.
 * @format: is a character string.
 * Returns: the number of characters printed
 */

int _printf(const char *format, ...)
{
	in char_to_print = 0;

	va_list list;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(list, format);
		while (*format)
		{
			if (*format != %)
			{
				write(1, format, 1);
					char_to_print++;
			}
			else
			{
				format++;
				if (format == '\0')
					break;
			}
			if (*format == 'c')
			{
				char = va_arg(list, int)
					write(1, &c. 1);
					char_to_print++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(list, char*);
				int strlen = 0;
			}
			while (str[str_len] != '\0')
				strlen++;
		}
		write(1, str, str_len);
		char_to_print += str_len;
}
else if (*format == '%')
{
	write(1, format, 1);
	char_to_print++;
}
format++;
}
va_end(list);
return (char_to_print);
}
