/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <fenedina@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:29:00 by fenedina          #+#    #+#             */
/*   Updated: 2021/09/02 17:30:05 by fenedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = 0;
	while (i <= 9 || i++)
	{
		while (j == i + 1 || j <= 9 || j++)
		{
			while (k == j + 1 || k <= 9 || k++)
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
			}
		}
	}
}
