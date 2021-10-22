#include "header.h"

void	ft_putstr(char *str, int div)
{
    if (div == 0)
        write (1, " ", 1);
	while (*str && *str != '\n')
	{
		write (1, str, 1);
		str++;
	}
}

int	ft_nbrcmp(int a, int b)
{
	if (a >= b)
		return (1);
	return (0);
}
