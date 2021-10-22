#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

char	*rev_print(char *str)
{
	int i;
	int len;
	char tmp;

	len = ft_strlen(str);	
	while(len >= 0)
	{
		write(1, &str[len], 1);
		len--;
	}
	return(str);
}

int main()
{
	rev_print("Hello!");
	return(0);
}
