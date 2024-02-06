// Deletes & frees the given node and each following node,
// and sets pointer to list to null

#include "libft.h"

/* void	ft_del(void *content)
{
	free(content);
} */

void	ft_lstclear(t_list **lst, void (*ft_del)(void*))
{
	t_list	*delete_lst;
	t_list	*lst_i;

	lst_i = *lst;
	while (lst_i)
	{
		delete_lst = lst_i;
		lst_i = lst_i->next;
		ft_lstdelone(delete_lst, ft_del);
	}
	*lst = NULL;
}
