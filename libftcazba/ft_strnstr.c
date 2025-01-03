/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvanderh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:27:13 by lvanderh          #+#    #+#             */
/*   Updated: 2024/10/23 01:44:02 by lvanderh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	if (little[0] == '\0')
		return ((char *)big);
	else
		return (NULL);
}
/*
#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	printf("la ft :%s\n", strnstr("Bonjour comment ca va", "ca va", 0));
	printf("ma ft :%s\n", ft_strnstr("Bonjour comment ca va", "ca va", 0));
}*/
