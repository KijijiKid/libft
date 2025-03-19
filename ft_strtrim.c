/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandre <mandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:34:07 by mandre            #+#    #+#             */
/*   Updated: 2025/03/19 10:39:43 by mandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	val_cmp(char digit, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == digit)
			return (1);
		i++;
	}
	return (0);
}

char	*s_create(int begin, int end, const char *s1)
{
	int		i;
	char	*r_string;

	r_string = ft_calloc(end - begin, sizeof(char));
	i = 0;
	while (i < end - begin + 1)
	{
		r_string[i] = s1[begin + i];
		i++;
	}
	r_string[begin + i] = '\0';
	return (r_string);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int	i;
	int	j;

	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	i = 0;
	while (val_cmp(s1[i], set))
		i++;
	j = ft_strlen(s1) - 1;
	while (val_cmp(s1[j], set))
		j--;
	return (s_create(i, j, s1));
}

// int main(void)
// {
// 	char test1[] = "ababababbbHello World!abababbabab";

// 	printf("Before: %s\n", test1);
// 	printf("After: %s\n", ft_strtrim(test1, "ab"));
// }
