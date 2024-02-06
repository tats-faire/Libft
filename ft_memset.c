/* Fills the first <n> bytes of the memory area
pointed to by <str> with the byte <c>. */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)str;
	while (n > 0)
	{
		temp[n - 1] = c;
		n--;
	}
	return (str);
}
