/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvanderh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:54:26 by lvanderh          #+#    #+#             */
/*   Updated: 2024/10/17 19:00:15 by lvanderh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		c = c - 32;
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("%c\n", toupper('a'));
	printf("ma ft: %c\n", ft_toupper('a'));
}*/
