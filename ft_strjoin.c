// Creates and returns a new string
// which is <s1> concatenated with <s2>

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*con_string;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	con_string = malloc(len_s1 + len_s2 + 1);
	if (!con_string)
		return (0);
	ft_memcpy(con_string, s1, len_s1);
	ft_memcpy(&(con_string[len_s1]), s2, len_s2);
	con_string[len_s1 + len_s2] = '\0';
	return (con_string);
}
