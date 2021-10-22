/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <fenedina@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 17:32:59 by fenedina          #+#    #+#             */
/*   Updated: 2021/09/05 17:33:27 by fenedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_head(int w)
{
	int	i;

	i = 0;
	ft_putchar ('o');
	while (i < (w - 2))
	{
		ft_putchar ('-');
		i++;
	}
	if (w > 1)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	ft_body(int h, int w)
{
	int	i_width;

	i_width = 1;
	while (h - 2 > 0)
	{
		ft_putchar('|');
		while (i_width + 1 < w)
		{
			ft_putchar(' ');
			i_width++;
		}
		i_width = 1;
		h--;
		if (w > 1)
		{
			ft_putchar('|');
		}
		ft_putchar('\n');
	}
}

void	ft_end(int w)
{
	int	i;

	i = 1;
	while (i <= w)
	{
		if (i == 1)
		{
			ft_putchar('o');
		}
		if (i < w && i < w - 1 && i != w)
		{
			ft_putchar('-');
		}
		if (i == w && i != 1)
		{
			ft_putchar('o');
		}
		i++;
	}
	ft_putchar('\n');
}

void	rush(int h, int w)
{
	if (h > 0 && w > 0)
	{
		ft_head(w);
		ft_body(h, w);
		if (h >= 2)
		{
			ft_end(w);
		}
	}
}
