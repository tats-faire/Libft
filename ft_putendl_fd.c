/* Writes a string to output, followed by newline
File descriptor values: 0 = standard input; 1 = standard output; 2 = standard error */

#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
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
	ft_putchar_fd('\n', fd);
}
