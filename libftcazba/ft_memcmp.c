/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvanderh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:50:38 by lvanderh          #+#    #+#             */
/*   Updated: 2024/10/22 19:25:28 by lvanderh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
    const char *s1 = "abc";
    const char *s2 = "abc";
    printf("la ft :%d\n", memcmp(s1, s2, 7));
    printf("ma ft :%d\n", ft_memcmp(s1, s2, 7));
}*/
