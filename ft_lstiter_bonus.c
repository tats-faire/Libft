/* Goes through <lst> and applies the function <f> on the content of each node
<lst> is the address of (the pointer to) a node
<f> is the address of the function used */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
