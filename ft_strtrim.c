/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandre <mandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:34:07 by mandre            #+#    #+#             */
/*   Updated: 2025/03/26 17:57:46 by mandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	val_cmp(char digit, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == digit)
			return (true);
		i++;
	}
	return (false);
}

char	*s_create(size_t begin, size_t end, const char *s1)
{
	size_t		i;
	char		*str;
	size_t		len;

	len = end - (begin - 1);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (ft_strdup(""));
	i = 0;
	while (i < len)
	{
		str[i] = s1[begin + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (ft_strdup(""));
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	i = 0;
	while (val_cmp(s1[i], set) && i < ft_strlen(s1))
		i++;
	j = ft_strlen(s1) - 1;
	while (val_cmp(s1[j], set) && 0 < j)
		j--;
	if (j - i < 0 || j < i)
		return (ft_strdup(""));
	return (s_create(i, j, s1));
}

// int main(void)
// {
// 	char test1[] = "xxxz  test with x and z and x .  zx  xx z";
// 	printf("Before: %s\n", test1);
// 	printf("After: %s\n", ft_strtrim(test1, "z x"));
// }