/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvanderh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:26:53 by lvanderh          #+#    #+#             */
/*   Updated: 2024/10/16 16:45:34 by lvanderh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if ((c >= 32) && (c <= 126))
		return (16384);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%d\n", isprint(9));
	printf("%d\n", isprint(79));
	printf("%d\n", isprint(127));
	printf("%d\n", ft_isprint(9));
	printf("%d\n", ft_isprint(97));
	printf("%d\n", ft_isprint(127));
}*/
