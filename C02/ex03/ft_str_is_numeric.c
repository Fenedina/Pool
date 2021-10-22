/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <fenedina@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 19:07:08 by fenedina          #+#    #+#             */
/*   Updated: 2021/09/04 20:50:55 by fenedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_numeric(char c)
{
	if ((c >= '1') && (c <= '9'))
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(ft_numeric(str[i])))
			return (0);
		i++;
	}
	return (1);
}
