/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvanderh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:38:12 by lvanderh          #+#    #+#             */
/*   Updated: 2024/10/25 19:18:51 by lvanderh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dest;

	if (nmemb != (nmemb * size) / size)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (ft_strdup(""));
	dest = malloc(nmemb * size);
	if (!dest)
		return (NULL);
	ft_memset(dest, 0, nmemb * size);
	return (dest);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	printf("%s\n", calloc(10, 
}*/
