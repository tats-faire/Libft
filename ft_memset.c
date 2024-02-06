// Fills the first <n> bytes of the memory area
// pointed to by <str> with the byte <c>.

#include "libft.h"
/* #include <unistd.h>
#include <stdlib.h>
#include <string.h> */

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)str;
	while (n > 0)
	{
		temp[n - 1] = c;
		n--;
	}
	return (str);
}

/* int main(void)
{
	void	*mem;
	void	*test_mem;
	if (!(mem = malloc(sizeof(*mem) * 15)))
		return (0);
	if (!(test_mem = malloc(sizeof(*test_mem) * 15)))
		return (0);
	ft_memset(mem, '\0', 1);
	memset(test_mem, '\0', 1);
	write(1, "My result is ", 13);
	write(1, mem, 15);
	write(1, "\nThe result should be ", 22);
	write(1, test_mem, 15);
} */
