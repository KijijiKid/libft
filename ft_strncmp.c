/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateoandre <mateoandre@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 10:08:38 by mateoandre        #+#    #+#             */
/*   Updated: 2025/03/14 10:19:23 by mateoandre       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(const char *s1, const char *s2, int n)
{
    int i;

    i = 0;
    while ((s1[i] == s2[i] && i < n )|| !s1[i] || !s2[i])
        i++;
    return(s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char arr1[] = "Hello W";
//     char arr2[] = "Hello M";

//     printf("Output: %i", strncmp(arr2, arr1, 7 ));
// }