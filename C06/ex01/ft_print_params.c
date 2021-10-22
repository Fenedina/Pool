/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 18:25:10 by fenedina          #+#    #+#             */
/*   Updated: 2021/09/09 11:36:20 by fenedina         ###   ########.fr       */
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

	n = 1;
	while (argv[n] != '\0')
	{
		ft_putchar(argv[n]);
		ft_putchar("\n");
		n++;
	}
	return (0);
}
