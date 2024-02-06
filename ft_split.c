// Allocates & returns a (2-dimensional) array of strings
// which is created by splitting <str> using the char <c> as delimiter

#include "libft.h"
#include <stdlib.h>

// Checks if any given character in <str> should be treated as a delimiter
// Results: 0 = no delimiter; 1 = real delimiter;
// 2 = fake delimiter (first or last in string, or next char is also c)

size_t	checkdelimiter(char const *str, char c, size_t i)
{
	if (str[i] != c)
		return (0);
	else
	{
		if (i == 0)
			return (2);
		if (i == ft_strlen(str) - 1)
			return (2);
		if (str[i + 1] == c)
			return (2);
		else
			return (1);
	}
}

// Counts how many characters this chunk has (until next occurance of <c> or end of <str>)

size_t	count_word_len(char const *str, char c, size_t i)
{
	size_t	counter;
	size_t	delimiter_flag;

	counter = 0;
	delimiter_flag = 0;
	while (str[i] != '\0')
	{
		delimiter_flag = checkdelimiter(str, c, i);
		if (delimiter_flag != 0)
			break ;
		counter++;
		i++;
	}
	return (counter);
}

// Counts how many chunks of string <str> are separated by char <c>

size_t	count_words(char const *str, char c)
{
	size_t	i;
	size_t	word_counter;

	i = 0;
	word_counter = 0;
	while (str[i] != '\0' && str[i] == c)
		i++;
	while (str[i] != '\0')
	{
		if (checkdelimiter(str, c, i) == 1)
			word_counter++;
		i++;
	}
	if (word_counter != 0 || ft_strlen(str) > 0)
		word_counter = word_counter + 2;
	else if (word_counter == 0)
		word_counter++;
	return (word_counter);
}

char	**ft_split(char const *str, char c)
{
	char	**cut_string;
	size_t	i;
	size_t	word_counter;
	size_t	word_num;

	i = 0;
	word_counter = 0;
	cut_string = 0;
	word_num = count_words(str, c);
	cut_string = (char **)malloc(sizeof(char *) * word_num);
	if (!cut_string)
		return (NULL);
	while ((str[i] != '\0') && (word_counter < word_num))
	{
		if ((checkdelimiter(str, c, i) == 1 || word_counter == 0)
			&& !(word_counter == 0 && str[i] == c && c != '\0'))
		{
			if (checkdelimiter(str, c, i) == 1)
				i++;
			cut_string[word_counter++] = ft_substr(str, i, count_word_len(str, c, i));
		}
		i++;
	}
	cut_string[word_counter] = NULL;
	return (cut_string);
}
