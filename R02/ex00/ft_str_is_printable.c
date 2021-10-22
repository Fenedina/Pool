#include "header.h"

int	ft_str_is_printable(char *str)
{
	int	boolean;

	boolean = 1;
	while (*str != '\n' && *str)
	{
		if (*str < 32)
			boolean = 0;
		if (*str == 127)
			boolean = 0;
		str ++;
	}
	return (boolean);
}
