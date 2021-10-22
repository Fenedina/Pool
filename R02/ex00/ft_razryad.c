#include "header.h"

int	ft_nbrcapacity(unsigned int nbr, int i)
{
    if (nbr)
        return (ft_nbrcapacity(nbr / 1000, i + 1));
    else
        return (i);
}

void	ft_middle(int count, t_btree *root, int j)
{
	int	c;

	c = 0;
	c = count % 100;
	if  (c < 20 && c > 11)
	{
	   ft_putstr(btree_return_data(root, c), j);
	   j = 0;
	}
	if (c > 19 || c == 10)
	{
		c = (c / 10) * 10;
		ft_putstr(btree_return_data(root, c), j);
		j = 0;
	}
	c = count % 100;
	if (c % 10 != 0)
	{
		ft_putstr(btree_return_data(root, c % 10), j);
		j = 0;
	}
}

void	ft_div(int nbr, int div, t_btree *root)
{
	int	j;
	int	count;

	j = 0;
	count = 0;
	count = nbr / div; 
	if (count / 100 != 0 && count > 9)
	{
		ft_putstr(btree_return_data(root, count / 100), j);
		j = 0;
		ft_putstr(btree_return_data(root, 100), j);
	}
	if (count % 100 != 0)	
		ft_middle(count, root, j);
}

int	ft_null(int nbr, int div)
{
	if (div > 0 && div != 1)
	{
		nbr = nbr % div;
		div = div / 1000;
	}
	return(div);
}

int	ft_raz(int i, int div)
{
	while (i != 0)
	{
		div *= 1000;
		i--;
	}
	return(div);
}
#include <stdio.h>
void	ft_nbr(unsigned int nbr, t_btree *root)
{
	int	div;
	int	i;
	int	j;

	j = 0;
	i = ft_nbrcapacity(nbr, 0);
	div = 1;
	div = ft_raz(i, div);
	while (div != 0)
    {
		if ((nbr / div) / 100 == 0 && (nbr / div) % 100 == 0)
			div = ft_null(nbr, div);
        ft_div(nbr, div, root);
        if (div > 0 && div != 1)
        {
            ft_putstr(btree_return_data(root, div), j);
            j = 0;
            nbr = nbr % div;
            div = div / 1000;
			//printf("%d\n", div);
        }
		if (div < 1)
			div = 0;        
    }
	write (1, "\n", 1);
}
