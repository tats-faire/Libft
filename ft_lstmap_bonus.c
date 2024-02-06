/* Creates a new list which is <lst> with the function <f> applied on each node.
Returns the resulting list or NULL
The <ft_del> function is used to delete the content of a node if needed */

#include "libft.h"

/* void	ft_del(void *content)
{
	free(content);
} */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*ft_del)(void *))
{
	t_list	*new_list;
	t_list	*new_list_root;

	if (lst == NULL)
		return (NULL);
	new_list = ft_lstnew(f(lst->content));
	new_list_root = new_list;
	if (new_list == NULL)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		if (lst->content == NULL)
		{
			ft_lstclear(&new_list_root, ft_del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, ft_lstnew(f(lst->content)));
		lst = lst->next;
	}
	return (new_list);
}
