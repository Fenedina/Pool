
int ft_atoi(char *str)
{
	int	i;
	int minus;
	int nbr;

	i = 0;
	minus = 1;
	nbr = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\r' 
		|| str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-')
		minus = -minus;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr *= 10;
		nbr += ((int)str[i] - 48);
		i++;
	}
	if (minus < 0)
		nbr *= minus;
	return (nbr);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("%d\n", ft_atoi("     -+23yy45o"));
	printf("%d\n", atoi("     -+23yy45o"));
	return (0);
}


