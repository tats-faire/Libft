/* Copies up until <dest_size> chars of a string into <dest> from <src>
and returns length of the copied string (<src>) */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	unsigned int	i;
	size_t			lengthsrc;

	i = 0;
	lengthsrc = ft_strlen(src);
	if (dest_size != 0)
	{
		while ((i < (dest_size - 1)) && (src[i] != '\0'))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (lengthsrc);
}
