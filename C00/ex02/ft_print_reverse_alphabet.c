/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <fenedina@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:22:26 by fenedina          #+#    #+#             */
/*   Updated: 2021/09/02 17:47:53 by fenedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_print_reverse_alphabet(void)
{
	char	letter;

	a = 122;
	letter = 'z';
	while (letter >= 'a')
	{
		ft_putchar(letter);
		letter--;
	}
}
