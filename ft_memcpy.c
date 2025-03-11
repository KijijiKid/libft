/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateoandre <mateoandre@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 12:32:30 by mateoandre        #+#    #+#             */
/*   Updated: 2025/03/11 12:55:00 by mateoandre       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memcpy(char *dest, char *src, int n)
{
    int i;
    i = 0;

    while (i < n)
    {
        dest[i] = src[i];
        i++;
    }
    return(dest);
}

// #include <stdio.h>
// int main(void)
// {
//     char buffer[10];
//     char tocpy[] = "Copied here!";

//     ft_memcpy(buffer, tocpy, sizeof(char) * 10);
    
//     printf("%s", buffer);
// }