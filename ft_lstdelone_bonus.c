/* Frees the memory of the content of the node in <*lst>
Whereas the memory of "next" is not freed
<*ft_del> is the adress of the function which is used to delete the content */

#include <stdlib.h>

/* void	ft_del(void *content)
{
	free(content);
} */

void	ft_lstdelone(t_list *lst, void (*ft_del)(void*))
{
	ft_del(lst->content);
	free(lst);
}
