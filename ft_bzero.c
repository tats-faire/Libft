// Erases data in the first <n> bytes of of the memory area
// pointed to by <str> by writing nulls there

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)str;
	while (n-- > 0)
		*temp++ = 0;
}
