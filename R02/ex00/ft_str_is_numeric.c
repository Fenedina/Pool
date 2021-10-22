#include "header.h"

int	ft_str_is_numeric(char *str)
{
	int	boolean;

	boolean = 1;
	while (*str != '\0')
	{
		if (*str < 48)
			boolean = 0;
		if (*str > 57)
			boolean = 0;
		str ++;
	}
	return (boolean);
}
