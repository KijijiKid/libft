/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateoandre <mateoandre@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:21:21 by mateoandre        #+#    #+#             */
/*   Updated: 2025/03/13 18:58:55 by mateoandre       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (((char *)s)[i] != c && ((char *)s)[i] != '\0')
        i++;
    return (&((char *)s)[i]);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char arr1[] = "Hello World!";
//     printf("First occurence: %s\n", ft_strchr(arr1, 'o'));

// }