#include "main.h"

/**
 * search_character - search for match and execute for the associate function
 * @nxchr: Next character in array for match.
 * @num: the next position in the arrangement.
 * Return: Pointer to a function.
 **/
int (*search_character(const char *nxchr, int num))(va_list)
{
	int i;

	case_t options[] = {
		{"s", print_string},
		{"c", print_char},
		{"d", print_int},
		{"i", print_int},
		{"b", print_bin},
		{NULL, NULL}
	};

	for (i = 0; options[i].mtch != NULL; i++)
		if (options[i].mtch[0] == nxchr[num])
			return (options[i].function);
	return (NULL);
}
