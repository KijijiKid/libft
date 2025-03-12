/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateoandre <mateoandre@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 22:15:23 by mateoandre        #+#    #+#             */
/*   Updated: 2025/03/10 22:15:25 by mateoandre       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int arg)
{
    if (('a' <= arg && arg <= 'z') || ('A' <= arg && arg <= 'Z') || ('0' <= arg && arg <= '9'))
        return (1);
    else
        return(0);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("%i", ft_isalnum('1'));
// }