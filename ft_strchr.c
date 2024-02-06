/* Searches for the character <c> in the string pointed at by <str>
Returns pointer to first occurence of <c> or null if not found */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	const char	*temp;

	temp = str;
	while (*temp)
	{
		if (*temp == (char) c)
		{
			return ((char *) temp);
		}
		temp++;
	}
	if ((char) c == '\0')
		return ((char *) temp);
	return (NULL);
}
