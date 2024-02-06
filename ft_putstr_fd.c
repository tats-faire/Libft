// Writes a string to output
// File descriptor values: 0 = standard input; 1 = standard output; 2 = standard error

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	const char	*counter;

	if (!str)
		return ;
	counter = str;
	while (*counter != 0)
	{
		ft_putchar_fd(*counter, fd);
		counter++;
	}
}
