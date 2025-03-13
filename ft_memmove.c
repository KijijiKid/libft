/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateoandre <mateoandre@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 12:59:58 by mateoandre        #+#    #+#             */
/*   Updated: 2025/03/13 13:04:15 by mateoandre       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void    *ft_memmove(void *dest, void *src, int n)
{
    int i;
    if (!dest && !src)
        return (NULL);
    i = 0;
    if (((unsigned char *) dest) < ((unsigned char *)src))// Wenn der Addresswert an der Stelle src größer ist als an der Stelle dest
    {
        while (i < n)
        {
            ((unsigned char *) dest)[i] = ((unsigned char *)src)[i];
            i++;
        }
    } else
    {
        while (0 < n)
        {
            n--;//Len for erstem Assigning decrementen
            ((unsigned char *) dest)[n] = ((unsigned char *)src)[n];
        }
    }
    return (dest);
}

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char src[] = "Hello World!";


//     memmove(src + 1, src, 3);
//     printf("Output: %s", src);
    
// }