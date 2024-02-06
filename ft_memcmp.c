/* Compares first <n> bytes of memory areas <str1> & <str2>
Returns ascii difference between first differing byte found
If return value = 0 -> First <n> bytes of <str1> and <str2> are equal
If return value < 0 -> Ascii value of 1st different byte is lower in <str1>
If return value > 0 -> Ascii value of 1st different byte is higher in <str1>*/

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	char	val_str1;
	char	val_str2;
	int		i;
	int		diff;

	i = 0;
	while (n--)
	{
		val_str1 = ((char *) str1)[i];
		val_str2 = ((char *) str2)[i];
		diff = ((unsigned char) val_str1) - ((unsigned char) val_str2);
		if (diff != 0)
		{
			return (diff);
		}
		i++;
	}
	return (0);
}
