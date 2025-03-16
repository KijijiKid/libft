/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandre <mandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 22:22:20 by mateoandre        #+#    #+#             */
/*   Updated: 2025/03/16 17:49:30 by mandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int arg)
{
	if (20 <= arg && arg <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("%i", ft_isprint(10));
// }