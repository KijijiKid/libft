/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateoandre <mateoandre@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 20:11:34 by mateoandre        #+#    #+#             */
/*   Updated: 2025/03/13 13:19:43 by mateoandre       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_toupper(int c)
{
    if (97 <= c && c <= 122)
        c -= 32;
    return (c);
}

// #include <stdio.h> 
// #include <ctype.h>
// int main(void)
// {
//     int i;
//     char lower[] = "abjee";

//     i = 0;
//     while (lower[i] != '\0')
//     {
//         printf("Capitalized: %c\n", (char)ft_toupper(lower[i]));
//         i++; 
//     }
// }