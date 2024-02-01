#include "main.h"
/**
 * _printf - prints the characters that it holds+
 * @format: contains a string of characters and specifiers
 * Return: the number of characters printed
*/
int _printf(const char *format, ...)
{
	char *str;
	int count = 0;
	va_list op;

	va_start(op, format);
	if (format == NULL)
	{
		exit(-1);
	}
	while (*format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++;
			switch (*format)
			{
				case 'c':
					count += _putchar(va_arg(op, int));
					break;
				case 's':
					str = va_arg(op, char*);
					count += print_string(str);
					break;
				case '%':
					count += _putchar('%');
					break;
				default:
					count += _putchar('%');
					break;
			}
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}
	va_end(op);
	return (count);
}
