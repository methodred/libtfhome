/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvanderh <lvanderh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:07:19 by lvanderh          #+#    #+#             */
/*   Updated: 2024/10/19 20:17:58 by lvanderh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

// size_t	ft_strlen(const char *str)
// {
// 	size_t	i;

// 	i = 0;
// 	while (*str++)
// 		i++;
// 	return (i);
// }

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(src);
	if (size == 0)
		return (j);
	while ((src[i]) && i < size -1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}
/*
#include <stdio.h>

int	main(void)
{
	const char src[20] = "abcdefgh";
	char dest[20] = "abcd";
//	const char src1 [20] = "abcdefgh";
//	char dest1[20] = "abcd";
	printf("ma ft: %ld\n", ft_strlcpy(dest, src, -1));
	printf("%s\n", dest);
//	printf("strlcpy: %ld\n", strlcpy(dest1, src1, -1));
//	printf("%s\n", dest1);
}*/
