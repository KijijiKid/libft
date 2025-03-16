/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandre <mandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 16:32:53 by mandre            #+#    #+#             */
/*   Updated: 2025/03/16 18:46:50 by mandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	count;
	size_t	index;

	if (!needle)
		return ((char *) haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		if (((char *)haystack)[i] == ((char *)needle)[0])
		{
			count = 0;
			index = i;
			while (((char *)needle)[count] == ((char *)haystack)[i] ||
			((char *)needle)[count] == '\0')
			{
				if (((char *)needle)[count] == '\0')
					return (&(((char *)haystack)[index]));
				i++;
				count++;
			}
		}
		i++;
	}
	return ((char *)haystack);
}

// #include <string.h>
// int	main(void)
// {
// 	char test1[] = "Hello this is World!";
// 	char test2[] = "this";
// 	printf("%s", ft_strnstr(test1, test2, 21));
// }