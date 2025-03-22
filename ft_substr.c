/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandre <mandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 10:37:22 by mandre            #+#    #+#             */
/*   Updated: 2025/03/22 14:03:30 by mandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*substr;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start || ft_strlen(s) < start + len)
		return (ft_strdup(""));
	substr = (char *)ft_calloc(len + 1, sizeof(char));
	if (!(substr))
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[i + start];
		i++;
	}
	return (substr);
}

// int	main(void)
// {
// 	// char arr1[] = "Hello World!";
// 	printf("%s\n", ft_substr("Hello World!", 2, 5));
// }