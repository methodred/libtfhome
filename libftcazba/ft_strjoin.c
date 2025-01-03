/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvanderh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:41:36 by lvanderh          #+#    #+#             */
/*   Updated: 2024/10/25 23:07:38 by lvanderh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	total;
	char	*dest;

	total = ft_strlen(s1) + ft_strlen(s2) + 1;
	i = 0;
	if (!s1 || !s2)
		return (NULL);
	dest = malloc((total) * sizeof(char));
	if (!dest)
		return (NULL);
	while (i < total)
	{
		while (i < ft_strlen(s1))
		{
			dest[i] = s1[i];
			i++;
		}
		dest[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char const *s1 = "abcdef";
	char const *s2 = "ghijklmnopqrs";
	printf("%s\n", ft_strjoin(s1, s2));
}*/
