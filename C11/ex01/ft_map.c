/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <fenedina@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:21:12 by fenedina          #+#    #+#             */
/*   Updated: 2021/09/14 16:47:07 by fenedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*str;

	i = 0;
	str = malloc(sizeof(tab) * length);
	while (i < length)
	{
		str[i] = f(tab[i]);
		i++;
	}
	return (str);
}
