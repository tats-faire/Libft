/* Applies function <f> to each char of string <s>
and returns the resulting new string
or NULL if the allocation of memory for new string failed */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*changed_string;
	size_t	i;

	changed_string = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!changed_string)
		return (NULL);
	i = 0;
	while (s[i])
	{
		changed_string[i] = f(i, s[i]);
		i++;
	}
	changed_string[i] = '\0';
	return (changed_string);
}
