/* Adds a new node at the end of a list
<lst> is address of (pointer to) first link of list (root)
<new> is address of (pointer to) node to be added */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	last_node = ft_lstlast(*lst);
	if (last_node == NULL)
		*lst = new;
	else
	last_node->next = new;
}
