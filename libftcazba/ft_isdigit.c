/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvanderh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:54:30 by lvanderh          #+#    #+#             */
/*   Updated: 2024/10/15 17:10:39 by lvanderh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main (void)
{
	printf("%d\n", ft_isdigit('y'));
	printf("%d\n", ft_isdigit('?'));
	printf("%d\n", ft_isdigit('7'));
	printf("%d\n", isdigit('i'));
	printf("%d\n", isdigit('8'));
}*/
