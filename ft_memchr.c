/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandre <mandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 14:53:40 by mandre            #+#    #+#             */
/*   Updated: 2025/03/14 16:32:01 by mandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, int n)
{
	int	i;

	i = 0;
	while (((char *)s)[i] && i < n && ((char *)s)[i] != c)
		i++;
	return (&(((void *)s)));
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char test1[] = {'a', 'b', 'c', 'd', 'e'};

//     printf("%s", ft_memchr(test1, 'b', 2));
// }