/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateoandre <mateoandre@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 19:05:21 by mateoandre        #+#    #+#             */
/*   Updated: 2025/03/13 19:11:25 by mateoandre       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i] != '\0')
        i++;
    while (((char *)s)[i] != c && 0 <= i)
        i--;
    return (&((char *)s)[i]);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char arr1[] = "Hello World!";
//     printf("First occurence: %s\n", ft_strrchr(arr1, 'l'));
// }