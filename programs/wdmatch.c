 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balica <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:20:34 by balica            #+#    #+#             */
/*   Updated: 2021/09/22 19:32:07 by fenedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
void ft_putstr(char *str)
{
 	int i;

 	i = 0;
 	while (str[i] != '\0')
 	{
 	 	write(1, &str[i], 1);
		i++;
 	}
}

int ft_strlen(char *str)
{
 	int i;
 
 	i = 0;
 	while (str[i])
  		i++;
 	return (i);
}

void ft_wdmatch(char *s1, char *s2)
{
 int i;
 int j;
 int length;

 length = ft_strlen(s1);
 i = 0;
 j = 0;
 while (s2[j] && i < length)
 {
  if (s2[j] == s1[i])
  {
   i++; 
  }
  j++;
 }
  if (i == length)
   ft_putstr(s1);
 
}

int main(int argc, char **argv)
{

 if (argc == 3)
     ft_wdmatch(argv[1], argv[2]);
 	write(1, "\n", 1);
 return (0);
}
