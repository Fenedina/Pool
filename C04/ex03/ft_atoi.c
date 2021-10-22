 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <fenedina@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 17:57:31 by fenedina          #+#    #+#             */
/*   Updated: 2021/09/07 12:26:18 by fenedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_number(int nbr, int minus)
{
	if (minus % 2 != 0)
	{
		nbr *= (-1);
	}
	return (nbr);
}

int	ft_atoi(char *str)
{
	int	minus;
	int	i;
	int	nbr;

	minus = 0;
	i = 0;
	nbr = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\r' || str[i] == '\f'
		|| str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '-')
		minus += 1;
        i++;
	while ((str[i] == '-') || (str[i] == '+'))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr *= 10;
		nbr += ((int)str[i] - 48);
		i++;
	}
	return (ft_number (nbr, minus));
}
