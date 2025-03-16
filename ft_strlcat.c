/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandre <mandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 19:34:27 by mateoandre        #+#    #+#             */
/*   Updated: 2025/03/16 17:44:24 by mandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	src_len;
	int	dst_len;
	int	i;
	int	x;

	dst_len = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	while (dst[dst_len] != '\0')
		dst_len++;
	i = 0;
	x = dst_len;
	while (x < dstsize - 1 && src[i] != '\0')
	{
		dst[x] = src[i];
		i++;
		x++;
	}
	dst[x] = '\0';
	return (dst_len + src_len);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char arr1[8] = "123";
//     char arr2[] = "456";

//     printf("Return: %lu\n", ft_strlcat(arr1, arr2, 6));
//     printf("Output: %s", arr1);
// }