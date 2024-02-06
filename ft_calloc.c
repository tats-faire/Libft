/* Allocates memory that can be used for any data type
for an array made of a number (<num>) of objects,
each of them <size> long (in bytes)
Returns pointer to the allocated memory block
or a null pointer if allocation of memory failed */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t num, size_t size)
{
	void	*alloc_mem;

	alloc_mem = malloc(num * size);
	if (alloc_mem == NULL)
		return (NULL);
	ft_bzero(alloc_mem, num * size);
	return (alloc_mem);
}
