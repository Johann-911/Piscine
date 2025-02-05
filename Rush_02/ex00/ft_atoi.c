#include "ft_atoi.h"

int ft_atoi(char *str)
{
    int i = 0;
    int result = 0;

    // Skip whitespace characters
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;

    // Negative numbers are not allowed
    if (str[i] == '-')
        return (-1);

    // Convert string digits to integer
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    // If non-numeric character is found, return error
    if (str[i] != '\0')
        return (-1);

    return (result);
}