/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 19:44:42 by fenedina          #+#    #+#             */
/*   Updated: 2021/09/09 11:45:02 by fenedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		write (1, &c[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	n;
	int	i;

	n = 1;
	i = 0;
	while (argv[n] != '\0')
	{
		n++;
		i++;
	}
	while (i > 0)
	{
		ft_putchar(argv[i]);
		ft_putchar("\n");
		i--;
	}
	return (0);
}
