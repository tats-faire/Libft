/* Copies <len> characters from memory area <src> to <dest>
and returns <dest> (a pointer to the destination)
Safer than ft_memcpy for overlapping memory blocks */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*temp_src;
	unsigned char	*temp_dest;

	temp_src = (unsigned char *)src;
	temp_dest = (unsigned char *)dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	if ((dest > src))
	{
		while (len--)
		{
			temp_dest[len] = temp_src[len];
		}
	}
	else
	{
		while (len--)
		{
			*temp_dest++ = *temp_src++;
		}
	}
	return (dest);
}
