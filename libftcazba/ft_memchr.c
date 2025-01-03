/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvanderh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 00:02:01 by lvanderh          #+#    #+#             */
/*   Updated: 2024/10/22 18:30:46 by lvanderh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (&((unsigned char *)s)[i]);
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	printf("la ft :%s\n", (unsigned char *)memchr("bonjour", 'o', 7));
	printf("ma ft :%s\n", (unsigned char *)ft_memchr("bonjour", 'o', 7));
}*/
