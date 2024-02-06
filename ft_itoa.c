/* Converts an integer into a string
Can also take negative numbers */

#include <stdlib.h>

size_t	count_nb_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	len;
	long	nb;

	len = count_nb_len(n);
	nb = n;
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	if (nb == 0)
		s[0] = '0';
	else if (nb < 0)
	{
		s[0] = '-';
		nb = -nb;
	}
	s[len--] = '\0';
	while (nb > 0)
	{
		s[len] = nb % 10 + '0';
		len--;
		nb = nb / 10;
	}
	return (s);
}
