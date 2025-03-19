/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandre <mandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:34:07 by mandre            #+#    #+#             */
/*   Updated: 2025/03/19 10:31:02 by mandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	s_len;
	char	*ptr;

	s_len = ft_strlen(s);
	ptr = (char *)malloc(sizeof(char) * s_len) + 1;
	if (!(ptr))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*tmp;


	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*val_cmp is good*/
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
	while (i < end - begin)
	{
		r_string[i] = s1[begin + i];
		i++;
	}
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

int main(void)
{
	char test1[] = "ababababbbHello World!abababbabab";

	printf("Before: %s\n", test1);
	printf("Before: %s\n", ft_strtrim(test1, "ab"));
}
