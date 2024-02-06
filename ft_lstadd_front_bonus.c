/* Adds a new node at the beginning of a list
<lst> is address of (pointer to) first link of list (root)
<new> is address of (pointer to) node to be added */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst)
		new->next = *lst;
	*lst = new;
}
