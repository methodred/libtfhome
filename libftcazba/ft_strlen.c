/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvanderh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:46:25 by lvanderh          #+#    #+#             */
/*   Updated: 2024/10/17 22:24:34 by lvanderh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	printf("%lu\n", strlen("forbiden"));
	printf("%lu\n", strlen(NULL));
	printf("%zu\n", ft_strlen(" "));
	printf("%zu\n", ft_strlen(NULL));
	printf("%zu\n", ft_strlen("for"));
}*/
