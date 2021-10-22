/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperegri <cperegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:08:27 by cperegri          #+#    #+#             */
/*   Updated: 2021/09/19 16:20:56 by fenedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

#include <stdio.h>

/* ************************************************************************** */

int	ft_strlen(char *dict)
{
	int	i;

	i = 0;
	while (*dict != '\n')
	{
		dict++;
		i++;
	}
	return (i);
}

int	ft_line_num(char *dict)
{
	int	i;

	i = 0;
	while (*dict)
	{
		if (*dict == '\n')
			i ++;
		dict ++;
	}
	i ++;
	return (i);
}

t_btree	*ft_tree_initializator(char *dict)
{
	t_btree			*root;
	unsigned int	a;
	char			*str;

	root = 0;
	while (*dict)
	{
//		write (1, "items are: ", 12);
		a = ft_atoi(dict);
//		printf("%d, and ", a);
		str = ft_pickletter(dict);
//		ft_putstr(str);
//		write(1, "\n", 1);
		btree_insert_data(&root, a, str);
		while (*dict != '\n')
			dict ++;
		dict ++;
	}
	return (root);
}

/* ************************************************************************** */

int	main(int argc, char **argv)
{
	char			*dict;
	char			*lib;
	t_btree			*root;
	unsigned int	nbr;

	lib = "numbers.dict";
	if ((argc > 3) || (argc < 2))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if (argc == 2)
		nbr = ft_atoi(argv[1]);
	if (argc == 3)
	{
		lib = argv[1];
		nbr = ft_atoi(argv[2]);
	}
	dict = ft_dict(lib);
	root = ft_tree_initializator(dict);
	ft_nbr(nbr, root);
	
/*	unsigned int	nbr;
	int				(*cmpf)(int, int);
	t_btree			**root;
	t_btree			*begin;
	
	root = &begin;
	begin = 0;
	char str0[] = "five";
	char str1[] = "six";
	char str2[] = "three";
	char str3[] = "one";
	char str4[] = "eight";
	cmpf = &ft_nbrcmp;
	btree_insert_data(root, 5, &str0[0], cmpf);
	btree_insert_data(root, 6, &str1[0], cmpf);
	btree_insert_data(root, 3, &str2[0], cmpf);
	btree_insert_data(root, 1, &str3[0], cmpf);
	btree_insert_data(root, 8, &str4[0], cmpf);
	write (1, btree_return_data(begin, 5, cmpf), 5);
	write (1, btree_return_data(begin, 3, cmpf), 5);
	write (1, btree_return_data(begin, 6, cmpf), 5);
	write (1, btree_return_data(begin, 3, cmpf), 5);
	write (1, btree_return_data(begin, 1, cmpf), 5);
	write (1, btree_return_data(begin, 8, cmpf), 5);*/
	return (0);
}

/* ************************************************************************** */
