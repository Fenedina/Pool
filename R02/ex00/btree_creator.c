/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_creator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperegri <cperegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 22:03:52 by cperegri          #+#    #+#             */
/*   Updated: 2021/09/19 15:07:09 by cperegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

/* ********************************create_a_tree***************************** */

t_btree	*btree_create_node(unsigned int nbr, char *str)
{
	t_btree	*new_elem;

	new_elem = malloc(sizeof(t_btree));
	if (new_elem)
	{
		new_elem->nbr = nbr;
		new_elem->str = str;
		new_elem->left = 0;
		new_elem->right = 0;
	}
	return (new_elem);
}

void	btree_traversal(t_btree *root, unsigned int nbr, char *str)
{
	if (root)
	{
		if (nbr >= root->nbr)
		{
			if (root->right)
				btree_traversal(root->right, nbr, str);
			else
				root->right = btree_create_node(nbr, str);
		}
		else
		{
			if (root->left)
				btree_traversal(root->left, nbr, str);
			else
				root->left = btree_create_node(nbr, str);
		}
	}
	else
		root = btree_create_node(nbr, str);
}

void	btree_insert_data(t_btree **root, unsigned int nbr, char *str)
{
	if (*root)
		btree_traversal(*root, nbr, str);
	else
		*root = btree_create_node(nbr, str);
}

/* ********************************return_data******************************* */

char	*btree_return_data(t_btree *root, unsigned int nbr)
{
	if (root->nbr == nbr)
		return (root->str);
	else
	{
		if (nbr >= root->nbr)
			return (btree_return_data(root->right, nbr));
		else
			return (btree_return_data(root->left, nbr));
	}
	return (0);
}
