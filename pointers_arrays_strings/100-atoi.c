#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 *
 * Return: the integer value, or 0 if no digits found
 */
int _atoi(char *s)
{
    int sign;
    int result;
    int found_digit;

    sign = 1;
    result = 0;
    found_digit = 0;

    while (*s != '\0')
    {
        if (found_digit == 0 && (*s == '-' || *s == '+'))
        {
            if (*s == '-')
                sign *= -1;
        }
        else if (*s >= '0' && *s <= '9')
        {
            found_digit = 1;
            result = result * 10 + (*s - '0');
        }
        else if (found_digit == 1)
            break;
        s++;
    }
    return (sign * result);
}
