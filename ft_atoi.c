// Converts the string <str> to an integer

/* #include <stdio.h>
#include <stdlib.h> */

int	ft_atoi(const char *str)
{
	int				i;
	int				neg_pos;
	unsigned int	number;

	i = 0;
	neg_pos = 1;
	number = 0;
	while ((str[i] == 32) || ((str[i] >= 9) && (str[i] <= 13)))
		i++;
	if ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			neg_pos = neg_pos * (-1);
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9') && str[i])
	{
		number *= 10;
		number += (str[i] - 48);
		i++;
	}
	number = number * neg_pos;
	return ((int)number);
}

/* int main(void)
{
	char test[] = "+-2147483648";
	int result = ft_atoi(test);
	int test_result = atoi(test);
	printf("My result is %i \n", result);
	printf("The result should be %i", test_result);
} */
