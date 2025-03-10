/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateoandre <mateoandre@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 22:35:26 by mateoandre        #+#    #+#             */
/*   Updated: 2025/03/10 23:25:34 by mateoandre       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_memset(char *str, int c, int range)
{
    int i;
    i = 0;
    while (i < range)
    {
        str[i] = c;
        i++;
    }
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char buffer[10];

//     ft_memset(buffer, 'a', 5);
//     ft_memset(buffer, 'g', sizeof(char) * 10);
    // memset(buffer, 'g', sizeof(char) * 10);
    
//     printf("%s", buffer);
// }