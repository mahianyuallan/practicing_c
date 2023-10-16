#include "main.h"

/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	int length = 0;
	char current_char;

	while ((current_char = *format) != '\0')
	{
		if (current_char == '%')
		{
			char next_char = *(format + 1);

			switch (next_char)
			{
				case 'd':
					length += printf("%d", va_arg(args, int));
					break;
				case 's':
					length += printf("%s", va_arg(args, char *));
					break;
				case 'c':
					length += printf("%c", va_arg(args, int));
					break;
				case '%':
					length += putchar('%');
					break;
				default:
					length += putchar(current_char);
					break;
			}

			format++;
		}
		else
		{
			length += putchar(current_char);
		}

		format++;
	}

	va_end(args);
	return (length);
}

int main(void)
{
	_printf("This is a test: %d, %s, %c, %%\n", 42, "Hello, World!", 'A');
	return (0);
}

