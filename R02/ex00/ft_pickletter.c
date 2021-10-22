#include "header.h"

char	*ft_pickletter(char *str)
{
	int	i;

	i = 0;
	while ((str[i] <= '9') && (str[i] >= '0'))
		i++;
	while (str[i] == ' ')
		i++;
	if (str[i] == ':')
		i++;
	while (str[i] == ' ')
		i++;
	return (&str[i]);
}

