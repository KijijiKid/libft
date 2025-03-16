/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandre <mandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 19:05:21 by mateoandre        #+#    #+#             */
/*   Updated: 2025/03/16 14:29:59 by mandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (((unsigned char *)s)[i] != c && 0 <= i)
		i--;
	/*Return Wert wird NULL wenn nichts in dem String gefunden wird! Verbessern!!!*/
	return (&((unsigned char *)s)[i]);

	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char arr1[] = "Hello World!";
//     printf("First occurence: %s\n", ft_strrchr(arr1, 'l'));
// }