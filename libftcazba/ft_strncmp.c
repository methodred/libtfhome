/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvanderh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:51:02 by lvanderh          #+#    #+#             */
/*   Updated: 2024/10/21 21:41:38 by lvanderh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	const char s1[50] = "bonjour";
	const char s2[50] = "bonsoir";
	printf("la ft :%d\n", strncmp(s1, s2, -1));
	printf("ma ft :%d\n", ft_strncmp(s1, s2, -1));
}*/
