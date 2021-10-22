#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_tree
{
	struct s_tree	*left;
	struct s_tree	*right;
	unsigned int	nbr;
	char			*str;
}					t_btree;

int				ft_symbolnum(char *lib);
char			*ft_dict(char *lib);
int				ft_str_is_printable(char *str);
int				ft_str_is_numeric(char *str);
void			ft_putstr(char	*str, int div);
int				ft_nbrcmp(int a, int b);
unsigned int	ft_atoi(char *str);
char			*ft_pickletter(char *str);
t_btree			*btree_create_node(unsigned int nbr, char *str);
void			btree_traversal(t_btree *root, unsigned int nbr, char *str);
void			btree_insert_data(t_btree **root, unsigned int nbr, char *str);
char			*btree_return_data(t_btree *root, unsigned int nbr);

int				ft_nbrcapacity(unsigned int nbr, int i);
void			ft_middle(int count, t_btree *root, int j);
void            ft_div (int nbr, int div, t_btree *root);
int             ft_null(int nbr, int div);
void			ft_nbr(unsigned int nbr, t_btree *root);
#endif
