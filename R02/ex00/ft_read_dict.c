/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperegri <cperegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 19:53:05 by cperegri          #+#    #+#             */
/*   Updated: 2021/09/19 14:36:14 by cperegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_symbolnum(char *lib)
{
	char	buf[100];
	int		i;
	int		count;
	int		fd;

	i = 1;
	count = 0;
	fd = open(lib, O_RDONLY);
	if (fd == -1)
		write(1, "Error", 6);
	while (i != 0)
	{
		i = read(fd, &buf, 100);
		count += i;
	}
	close(fd);
	return (count);
}

char	*ft_dict(char *lib)
{
	int		fd;
	int		i;
	char	*new_lib;
	int		count;

	i = 1;
	count = ft_symbolnum(lib);
	fd = open(lib, O_RDONLY);
	new_lib = malloc(sizeof(char) * (count + 1));
	if (new_lib == 0)
		return (0);
	count = 0;
	while (i != 0)
	{
		i = read(fd, new_lib + count, 100);
		count += i;
	}
	new_lib[count] = '\0';
	return (new_lib);
}
