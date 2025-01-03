/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvanderh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:24:09 by lvanderh          #+#    #+#             */
/*   Updated: 2024/10/21 20:42:00 by lvanderh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	j;

	j = (char)c;
	i = 0;
	while (s[i] != '\0' && s[i] != j)
		i++;
	if (s[i] == j)
		return ((char *)&s[i]);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%s\n", strchr("bonjour", 'o'));
	printf("%s\n", strchr("bonjour", '\0'));
	printf("ma ft :%s\n", ft_strchr("bonjour", 'o'));
	printf("ma ft :%s\n", ft_strchr("bonjour", '\0'));
}*/
