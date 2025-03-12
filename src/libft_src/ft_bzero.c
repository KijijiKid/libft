/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateoandre <mateoandre@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 23:27:39 by mateoandre        #+#    #+#             */
/*   Updated: 2025/03/10 23:37:35 by mateoandre       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_bzero(char *str, int size)
{
    int i;
    i = 0;
    while(i < size)
    {
        str[i] = '\0';
        i++;
    }
}

// #include <stdio.h>
// int main(void)
// {
//     char buffer[] = "SeeYou";
    
//     printf("Before: %s\n", buffer);
//     ft_bzero(buffer, 3);
//     printf("After: %c", buffer[3]);
// }