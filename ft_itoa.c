/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandre <mandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 14:55:56 by mandre            #+#    #+#             */
/*   Updated: 2025/03/23 16:40:39 by mandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_length(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i = 1;
		n *= -1;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*array;
	int		i;
	int		index;

	index = 0;
	array = calloc(get_length(n), sizeof(char));
	if (!array)
		return (NULL);
	if (n < 0)
	{
		array[0] = '-';
		n *= -1;
		index = 1;
	}
	i = get_length(n);
	array[i] = '\0';
	i--;
	while (index <= i)
	{
		array[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	return (array);
}

int	main(void)
{
	int	test;

	test = 0;
	printf("%i\n", get_length(test));
	printf("%s\n", ft_itoa(test));
}