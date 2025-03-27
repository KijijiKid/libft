/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandre <mandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 10:40:27 by mandre            #+#    #+#             */
/*   Updated: 2025/03/27 11:44:40 by mandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*get_word_index(const char *s, char c)
{
	while (*s == c)
		s++;
	return (s);
}

int	wrd_count(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (*s)
	{
		if (*s != c && i == 0)
		{
			i = 1;
			count++;
		}
		else if (*s == c)
			i = 0;
		s++;
	}
	return (count);
}

int	word_len(char const *s, char c)// 
{
	int	i;

	i = 0;
	while (s[i] != '\0' || s[i] != c)
		i++;
	return (i);
}

char	*write_word(char const **s, char c)
{
	int		i;
	char	*array;

	i = 0;
	while ((*s)[i] != c && s[i])
		i++;
	array = (char *)malloc(sizeof(char) * (i + 1));
	if (!array)
		return (NULL);
	i = 0;
	while ((*s)[i] != c && (*s)[i])
	{
		array[i] = (*s)[i];
		i++;
	}
	array[i] = '\0';
	*s += i;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		word_count;
	int		i;

	if (!s)
		return (NULL);
	word_count = wrd_count(s, c);
	array = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		s = get_word_index(s, c);
		array[i] = write_word(&s, c);
		i++;
	}
	array[i] = NULL;
	return (array);
}

// int	main(void)
// {
// 	char test[] = "Hello!";
// 	printf("After: %i\n", wrd_count(test, ' '));
// 	printf("After: %s\n", *ft_split(test, ' '));
// }