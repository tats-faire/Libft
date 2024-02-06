/* Searches for first occurence of char <c> in
first <n> bytes of the memory area pointed to by <ptr>.
Difference to ft_strchr: does not stop at NULL character.
Returns pointer to first matching byte
or NULL if char doesn't occur in this memory area */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	size_t				i;
	const unsigned char	*temp_ptr;

	i = 0;
	temp_ptr = ptr;
	while (i < n)
	{
		if (temp_ptr[i] == (unsigned char) c)
			return ((void *) &temp_ptr[i]);
		i++;
	}
	return (NULL);
}
