/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateoandre <mateoandre@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 12:32:30 by mateoandre        #+#    #+#             */
/*   Updated: 2025/03/11 15:49:45 by mateoandre       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    *ft_memcpy(void *dest, void *src, int n)
{
    int i;
    i = 0;
    if (!dest && !src)
        return (NULL);
    while (i < n)
    {
        ((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
        i++;
    }
    return(dest);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
//     char buffer[4];
//     char tocpy[]= "15739";

//     ft_memcpy(buffer, tocpy, sizeof(char) * 4);
    
//     printf("%s", buffer);
// }