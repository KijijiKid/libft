/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandre <mandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 14:53:40 by mandre            #+#    #+#             */
/*   Updated: 2025/03/16 15:53:41 by mandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (((char *)s)[i] && i < n && ((char *)s)[i] != c)
		i++;
	if (((char *)s)[i] == c)
		return (&(((void *)s))[i]);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char test1[] = {'a', 'b', 'c', 'd', 'e'};

//     printf("%s", ft_memchr(test1, 'b', 2));
// }