/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <fenedina@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 16:39:10 by fenedina          #+#    #+#             */
/*   Updated: 2021/09/10 22:09:09 by fenedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*A;
	int		i;
	int		c;

	i = 0;
	c = 0;
	while (src[i] != '\0')
	{
		c++;
		i++;
	}
	A = malloc(sizeof(char) * c + 1);
	if (NULL == A)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		A[i] = src[i];
		i++;
	}
	return (A);
}
