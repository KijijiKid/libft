/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateoandre <mateoandre@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:18:05 by mateoandre        #+#    #+#             */
/*   Updated: 2025/03/12 19:28:05 by mateoandre       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



unsigned long ft_strlcpy(char *dst, char *src, int size)
{
    int i;
    int s_len;
    int cpy_len;
    i = 0;
    s_len = 0;
    
    while (src[s_len] != '\0')
        s_len++;
    if (size == 0)
        return (s_len);
    if (size - 1 < s_len)
        cpy_len = size - 1;
    else
        cpy_len = s_len;
    
    while (i < cpy_len)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (s_len);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
    char arr1[] = "Hello World!";
    char arr2[8];

    // printf("Lenght: %lu\n", ft_strlen(arr2));
    printf("Return: %lu\n", ft_strlcpy(arr2, arr1, 2));
    printf("Output: %s", arr2);
}