// Counts and returns length of a string

#include "libft.h"

size_t	ft_strlen(const char *string)
{
	const char	*iterator;

	iterator = string;
	while (*iterator != '\0')
	{
		iterator++;
	}
	return (iterator - string);
}
