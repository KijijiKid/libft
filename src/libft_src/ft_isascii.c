/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateoandre <mateoandre@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 22:15:33 by mateoandre        #+#    #+#             */
/*   Updated: 2025/03/10 22:20:41 by mateoandre       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int arg)
{
    if (0 <= arg && arg <= 255)
        return (1);
    else 
        return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("%i", ft_isascii('ß'));
// }