/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandre <mandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 18:03:18 by mandre            #+#    #+#             */
/*   Updated: 2025/03/17 14:17:25 by mandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	number;
	int	multiply;

	i = 0;
	number = 0;
	while (str[i] == ' ' || 9 <= str[i] || str[i] <= 13)
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		multiply = -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		number *= 10;
		number += str[i] - '0';
		i++;
	}
	return (number * multiply);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	char arr1[] = "  -23";

// 	printf("%i", ft_atoi(arr1));
// }