/* Compares up to <n> characters (or until NULL) of <str1> to <str2>
Returns difference in ascii table for first differing char
result = 0 	-> ascii value equal;
result < 0 	-> lower value in <str1>;
result > 0 	-> higher value in <str1> */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int	i;
	int				diff;
	char			val_str1;
	char			val_str2;

	i = 0;
	diff = 0;
	while (n--)
	{
		val_str1 = str1[i];
		val_str2 = str2[i];
		diff = (unsigned char)val_str1 - (unsigned char)val_str2;
		if (diff != 0)
			return (diff);
		if (val_str1 == 0)
			return (0);
		i++;
	}
	return (diff);
}
