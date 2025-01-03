/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvanderh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:27:31 by lvanderh          #+#    #+#             */
/*   Updated: 2024/10/17 21:53:50 by lvanderh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
		p[i++] = c;
	return (s);
}
/*
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char str[] = "fofo";
	printf("%s\n", (char *)memset(str, 'D', 3));
	printf("%s\n", (char *)memset(str, 'D', 3));
	ft_memset(str, 'D', 3);
	printf("%s\n", str);
	printf("%s\n", (char *)ft_memset(str, 'D', 3));
}*/
