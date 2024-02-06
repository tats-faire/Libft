// Creates and returns a string
// which is <s1> but with all characters specified in <trim> trimmed
// from the string's beginning and end

#include "libft.h"
#include <stdbool.h>

// Checks if given character is in <trim>
bool	ft_search_helper(char const hay, char const *needles)
{
	int		i;

	i = 0;
	while (needles[i] != '\0')
	{
		if (hay == needles[i])
		{
			return (true);
		}
		i++;
	}
	return (false);
}

// Counts how many chars need to be trimmed from the beginning of the string
// Stops counting as soon as the next char in <s1> is not in <trim>
size_t	ft_search(char const *haystack, char const *needles)
{
	size_t	trim_counter;

	trim_counter = 0;
	while (haystack[trim_counter] != '\0')
	{
		if (ft_search_helper(haystack[trim_counter], needles) == true)
			trim_counter++;
		else
			return (trim_counter);
	}
	return (trim_counter);
}

// Same as ft_search, but goes through s1 backwards:
// Counts how many chars need to be trimmed from the end of the string
// Stops counting as soon as the previous char in <s1> is not in <trim>
size_t	ft_search_backwards(char const *haystack, char const *needles)
{
	size_t	trim_counter;
	size_t	i;

	trim_counter = 0;
	i = (ft_strlen(haystack) - 1);
	while (trim_counter <= (i))
	{
		if (ft_search_helper(haystack[i - trim_counter], needles) == true)
			trim_counter++;
		else
			return (trim_counter);
	}
	return (trim_counter);
}

char	*ft_strtrim(char const *s1, char const *trim)
{
	char	*trimmed_str;
	size_t	cut_start;
	size_t	cut_end;
	size_t	len_trimmed_str;

	if (!trim)
		return (ft_strdup(s1));
	cut_start = ft_search(s1, trim);
	cut_end = ft_search_backwards(s1, trim);
	if (cut_start + cut_end >= ft_strlen(s1))
		return (ft_strdup(""));
	len_trimmed_str = ft_strlen(s1) - cut_start - cut_end;
	trimmed_str = ft_substr(s1, cut_start, len_trimmed_str);
	return (trimmed_str);
}
