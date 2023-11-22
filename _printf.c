#include "main.h"

/**
 * _printf - Outputs a formatted string
 * @fotmat: Character string to print
 *
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list ogStr;
	int char_count = 0;
	
	if (format == NULL)
		return (-1);

	va_start(ogStr, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			
			if (*format == '\0' || *format == ' ')
				return (-1);

			if (*format == 'c')
			{
				char_count += _printChar(va_arg(ogStr,int));

			}
			else if (*format == 's')
			{
				char_count += _printStr(va_arg(ogStr, char *));
			}
			else if (*format == 'i')
			{
		
				char_count += _printInt(va_arg(ogStr, int));
			}
			else if (*format == 'd')
			{
				char_count += _printInt(va_arg(ogStr, int));
			}
			else if (*format == '%')
			{
				char_count += _printChar("%");
			}
			else
			{
				char_count += _printChar("%");
				char_count += _printChar(*format);
			}

		}

		format++;
	}

	va_end(ogStr);

	return (char_count);
}
