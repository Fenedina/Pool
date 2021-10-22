#include "header.h"

unsigned int	ft_atoi(char *str)
{
	unsigned int	result;
	int				i;

	i = 0;
	result = 0;
	while ((str[i]) && ((str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v')
			|| (str[i] == '\f') || (str[i] == '\r' ) || (str[i] == ' ' )))
	{
		i ++;
	}
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			write(2, "Error\n", 6);
		else
			i++;
	}
	while ((str[i] != '\0') && (str[i] >= '0') && (str[i] <= '9'))
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result);
}
