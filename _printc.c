include "main.h"
/**
 * printf_string - print a string
 * @val: argument
 * Return: the number of characters and length of the string
 */

int printf_string(val_list val)
{
	char *str;
	int m;
	int length;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null))"
		length = _strlen(str);
		for (m = 0; m < length; m++)
			_putchar(str[m]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; m++)
			_putchar(str[m]);
		return (length);
	}
}
