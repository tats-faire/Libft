// Searches for the character <c> in the string pointed at by <str>
// Returns pointer to last occurence of <c> or NULL if not found

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*result_ptr;

	result_ptr = NULL;
	while (*str)
	{
		if (*str == (char)c)
			result_ptr = str;
		str++;
	}
	if ((char)c == '\0')
		return ((char *) str);
	return ((char *)result_ptr);
}
