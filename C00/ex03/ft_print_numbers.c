/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <fenedina@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:25:09 by fenedina          #+#    #+#             */
/*   Updated: 2021/09/02 17:26:56 by fenedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_print_numbers(void)
{
	char	numbers;

	numbers = '0';
	while (numbers <= '9')
	{
		ft_putchar (numbers);
		numbers ++;
	}
}
