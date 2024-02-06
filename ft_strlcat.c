// Concenates a string
// (adds max (<size> - (<len> of <dest>) - 1) chars of <src> after <dest>)
// and returns resulting length

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_ln;

	dest_ln = ft_strlen(dest);
	if (dest_ln > size)
		dest_ln = size;
	ft_strlcpy(&dest[dest_ln], src, size - dest_ln);
	return (ft_strlen(src) + dest_ln);
}
