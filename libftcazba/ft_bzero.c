/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvanderh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:14:04 by lvanderh          #+#    #+#             */
/*   Updated: 2024/10/19 20:19:05 by lvanderh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
//#include <string.h>
//#include <stdio.h>

/*int	main(void)
{
	char	str[] = "yoyoytltltltoyoyo";
	int i;

	ft_bzero(str, 5);
	i = 0;
	while (i < 17)
	{
		if (str[i] == '\0')
			printf("str[%d] = \\0\n", i);
		else
			printf("str[%d] = %c\n", i, str[i]);
		i++;
	}
	return (0);
}*/
