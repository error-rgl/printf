#include "main.h"

/**
 * print_string - prints a string
 * @s: Arguments of variadic list, return the of function _printf
 * Return: amount the characters in string.
 **/
int print_string(va_list s)
{
	char *str;
	int i;

	str = va_arg(s, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

/**
 *print_char - prints a char
 * @c: Arguments of variadic list, return the of function _print
 * Return: value 1.
 **/
int print_char(va_list c)
{
	char chtr = (char) va_arg(c, int);

	_putchar (chtr);

	return (1);
}

