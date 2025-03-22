/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandre <mandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 10:40:27 by mandre            #+#    #+#             */
/*   Updated: 2025/03/22 14:10:35 by mandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char	*write_word(char const *s, char c)
{
	int		i;
	char	*array;

	i = 0;
	array = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			array[i] = '\0';
			return (array);
		}
		else
			array[i] = s[i];
		i++;
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		word_count;
	int		i;

	word_count = wrd_count(s, c);
	array = ft_calloc(word_count + 1, sizeof(char));
	i = 0;
	while (i < word_count)
	{
		array[i] = write_word(s, c);
		i++;
	}
	return (array);
}

// #include "stdio.h"
// int	main(void)
// {
// 	char test[] = "	This 	is 	so different to strtrim ";
// 	printf("After: %i\n", wrd_count(test, ' '));
// }