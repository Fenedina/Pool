#include <unistd.h>

void ft_dubl(char *str)
{
	int i;
	int j;
	int f;

	i = 1;
	j = 0;
	f = 0;
	write(1, &str[0], 1);
	while (str[i] != '\0')
	{
		while (j < i)
		{
			if (str[i] == str[j])
				f = 1;
			j++;
		}
		if (f == 0)
			write(1, &str[i], 1);
		j = 0;
		f = 0;
		i++;
	}
}

int main()
{
	ft_dubl("ttotyjr");
	return(0);
}
