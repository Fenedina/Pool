/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 18:50:49 by fenedina          #+#    #+#             */
/*   Updated: 2021/09/05 19:56:42 by fenedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	b;

	i = 0;
	b = 0;
	while (dest[i] != '\0')
	{
		i++;
		b++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[b + i] = src[i];
		i++;
	}
	dest[b + i] = '\0';
	return (dest);
}
