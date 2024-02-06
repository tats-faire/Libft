/* Allocates memory for a copy of string <s1> and copies <s1>
Returns a pointer to the copy */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*copy_s2;
	size_t	length;

	length = ft_strlen(s1) + 1;
	copy_s2 = malloc(length);
	if (copy_s2 == NULL)
		return (NULL);
	ft_strlcpy(copy_s2, s1, length);
	return (copy_s2);
}
