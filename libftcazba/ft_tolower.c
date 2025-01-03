/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvanderh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:00:56 by lvanderh          #+#    #+#             */
/*   Updated: 2024/10/17 19:04:37 by lvanderh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		c = c + 32;
	return (c);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%c\n", tolower('B'));
	printf("%c\n", tolower('0'));
	printf("ma ft: %c\n", ft_tolower('B'));
	printf("ma ft: %c\n", ft_tolower('0'));
}*/
