/* Needle in a haystack:
Searches for the (null-terminated) string <needle> in the
(null-terminated) string <haystack>.
Not more than <len> characters are searched.
Returns pointer to first char of first occurence of <needle> in <haystack>
or NULL if <needle> occurs nowhere
or <haystack> if <needle> is an empty string */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	counter;

	i = 0;
	j = 0;
	counter = len;
	if (needle[j] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && counter > 0)
	{
		while ((haystack[i + j] == needle[j]) && (haystack[i + j] != '\0')
			&& (i + j < len))
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		j = 0;
		i++;
		counter--;
	}
	return (0);
}
