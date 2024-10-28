/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvanderh <lvanderh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:32:07 by lvanderh          #+#    #+#             */
/*   Updated: 2024/10/21 21:10:57 by lvanderh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	j = ft_strlen(src);
	if (dest == NULL)
	{
		if (dest == NULL && size != 0)
			return (ft_strlen(dest));
		return (j);
	}
	i = ft_strlen(dest);
	if (size <= i)
		return (size + j);
	k = 0;
	while (src[k] && (i + k) < (size - 1))
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';
	return (i + j);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{

	// char *dest = NULL;
	// char src[] = "de lucas";
	char *dest1 = NULL;
	char src1[] = "de lucas";

	
	//  printf("%zu\n", strlcat(dest, src, 0));
	//  printf("%s\n", dest);
	printf("%zu\n", ft_strlcat(dest1, src1, 0));
	printf("%s\n", dest1);
	printf("%s\n", "----------------");	
}*/
