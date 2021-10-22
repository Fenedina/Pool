/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <fenedina@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:21:16 by fenedina          #+#    #+#             */
/*   Updated: 2021/09/07 18:41:43 by fenedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	c;

	i = 0;
	c = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while ((i <= nb) || (nb > 0))
	{
		c *= nb;
		nb--;
		i++;
	}
	return (c);
}
