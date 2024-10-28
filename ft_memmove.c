/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvanderh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:14:07 by lvanderh          #+#    #+#             */
/*   Updated: 2024/10/19 20:25:28 by lvanderh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!src && !dest)
		return (NULL);
	if (dest > src)
		while (n--)
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
//	char src[] = "abcdefgh";
//	char dest[] = "abcdefgh";
//	printf("%p\n", ft_memmove(dest, src, 2));
//	printf("%p\n", memmove(dest, src, 2));
//	printf("%s\n", dest);
	char src1[10] = "";
	char dest1[10] = "";
	printf("%p\n", memmove(dest1, src1, 3));
	printf("%s\n", dest1);
}*/
