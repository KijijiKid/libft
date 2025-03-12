/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateoandre <mateoandre@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 12:59:58 by mateoandre        #+#    #+#             */
/*   Updated: 2025/03/11 16:14:37 by mateoandre       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    *ft_memmove(void *dest, void *src, int n)
{
    int i;
    if (!dest && !src)
        return (NULL);
    i = 0;
    while (i < n)
    {
        ((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
        i++;
    }
    return (ft_memmove);
}

#include <unistd.h>
int main(void)
{
    char test[] = "12345";
    char buffer[5];

    
    
}