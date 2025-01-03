/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvanderh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:12:50 by lvanderh          #+#    #+#             */
/*   Updated: 2024/10/25 19:15:00 by lvanderh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src && n == 0)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
//	int i;
	char src[] = "hhhhhh";
	char dest[10];

//	i = 0;
//	ft_memcpy(dest, src, 4);
//	while (dest[i])
		printf("%p\n", ft_memcpy(dest, src, 5));
//		printf("%p\n", memcpy(dest, src, 5));
		printf("%s\n", dest);
}*/
