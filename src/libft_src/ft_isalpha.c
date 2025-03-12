/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateoandre <mateoandre@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 22:15:12 by mateoandre        #+#    #+#             */
/*   Updated: 2025/03/10 22:28:10 by mateoandre       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int arg)
{
    if (('a' <= arg && arg <= 'z') || ('A' <= arg && arg <= 'Z'))
        return (1);
    else
        return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("%i", ft_isalpha('G'));
// }