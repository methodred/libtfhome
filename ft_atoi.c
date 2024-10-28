/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvanderh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:13:09 by lvanderh          #+#    #+#             */
/*   Updated: 2024/10/24 17:57:08 by lvanderh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	neg;
	int	result;

	result = 0;
	neg = 1;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			neg = -neg;
		nptr++;
	}
	while (*nptr <= '9' && *nptr >= '0')
	{
		result = result * 10 + *nptr - '0';
		nptr++;
	}
	return (result * neg);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	printf("%d\n", atoi("-885"));
	printf("%d\n", atoi("\t+-885"));
	printf("%d\n", ft_atoi("-885"));
	printf("%d\n", ft_atoi("+-885"));
	
}*/
