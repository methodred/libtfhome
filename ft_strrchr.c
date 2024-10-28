/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvanderh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:12:07 by lvanderh          #+#    #+#             */
/*   Updated: 2024/10/21 20:48:55 by lvanderh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	j;

	j = (char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == j)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("la ft :%s\n", strrchr("bonjour", 'o'));
    printf("la ft :%s\n", strrchr("bonjour", '\0'));
    printf("ma ft :%s\n", ft_strrchr("bonjour", 'o'));
    printf("ma ft :%s\n", ft_strrchr("bonjour", '\0'));
}*/
