/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvanderh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:48:11 by lvanderh          #+#    #+#             */
/*   Updated: 2024/10/28 21:38:21 by lvanderh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	j;
	size_t	i;

	i = 0;
	if(!s1)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (ft_strrchr(set, s1[j]))
		j--;
	return (ft_substr(s1, i, j - i + 1));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strtrim("          abcdefg  ", " "));
	
}*/
