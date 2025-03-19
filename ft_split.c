/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandre <mandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 10:40:27 by mandre            #+#    #+#             */
/*   Updated: 2025/03/19 17:25:30 by mandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		wrd_count(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i= 0;
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

// char	**ft_split(char const *s, char c)
// {
// 		char	**array;

// }


#include "string.h"
int	main(void)
{
	char test[] = "	This 	is 	so different to strtrim ";
	

	printf("After: %i\n", wrd_count(test, ' '));
}