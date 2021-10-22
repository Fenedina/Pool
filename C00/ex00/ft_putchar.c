/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <fenedina@student.21-school.ru>    +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:00:26 by fenedina          #+#    #+#             */
/*   Updated: 2021/09/03 21:04:58 by fenedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main (void)
{
	ft_putchar('c');
	return 0;
}
