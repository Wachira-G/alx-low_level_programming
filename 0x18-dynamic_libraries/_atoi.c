#include "main.h"
/**
 *_atoi - Converts a string to an integer
 *@s: String to be converted
 *
 *Return: Converted integer
 */
int _atoi(char *s)
{
	int sign;
	unsigned int num;
	char *str;

	str = s;
	num = 0;
	sign = 1;
	while (*str != 0 && (*str < '0' || *str > '9'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	if (*str != 0)
	{
		do {
			num = num * 10 + (*str - '0');
			str++;
		} while (*str >= '0' && *str <= '9');
	}
	return (num * sign);
}

