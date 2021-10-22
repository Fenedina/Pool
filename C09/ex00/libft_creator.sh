# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fenedina <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/12 14:11:25 by fenedina          #+#    #+#              #
#    Updated: 2021/09/12 14:56:05 by fenedina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

gcc -c ft_putchar.c ft_strcmp.c ft_strlen.c ft_putstr.c ft_swap.c

ar rc libft.a ft_putchar.o ft_strcmp.o ft_strlen.o ft_putstr.o ft_swap.o

ranlib libft.a
