// Creates & returns a new string, which is the same as a substring of string <s>
// This substring starts at <start> & has max length <len>

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_string;

	if (start >= ft_strlen(s))
	{
		new_string = malloc(1);
		new_string[0] = '\0';
		return (new_string);
	}
	else if (len > ft_strlen(&s[start]))
	{
		new_string = malloc(ft_strlen(&s[start]) + 1);
		len = ft_strlen(&s[start]);
	}
	else
		new_string = malloc(len + 1);
	if (!new_string)
		return (0);
	ft_strlcpy(new_string, &s[start], (len + 1));
	return (new_string);
}
