/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandre <mandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 18:03:18 by mandre            #+#    #+#             */
/*   Updated: 2025/03/16 15:35:36 by mandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	number;

	if (str[0] == 45)
		i = 1;
	else
		i = 0;
	number = 0;
	while (str[i] != '\0' && '0' <= str[i] && str[i] <= '9')
	{
		number *= 10;
		number += str[i] - '0';
		i++;
	}
	if (str[0] == 45)
		number *= -1;
	return (number);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	char arr1[] = "-2147483648";

// 	printf("%i", ft_atoi(arr1));
// }
