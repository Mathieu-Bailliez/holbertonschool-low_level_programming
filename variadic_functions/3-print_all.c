#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @args: arguments
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an int
 * @args: arguments
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: arguments
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: arguments
 */
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of types
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *sep = "";

	struct printer
	{
		char *type;
		void (*f)(va_list);
	};

	struct printer p[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (p[j].type)
		{
			if (*p[j].type == format[i])
			{
				printf("%s", sep);
				p[j].f(args);
				sep = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(args);

	printf("\n");
}
