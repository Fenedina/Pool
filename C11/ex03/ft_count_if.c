/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <fenedina@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:42:10 by fenedina          #+#    #+#             */
/*   Updated: 2021/09/14 19:09:18 by fenedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			c++;
		i++;
	}
	return (c);
}
