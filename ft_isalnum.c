/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvanderh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:02:04 by lvanderh          #+#    #+#             */
/*   Updated: 2024/10/16 16:14:34 by lvanderh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z'))
		|| ((c >= '0') && (c <= '9')))
		return (8);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%d\n", isalnum('r'));
	printf("%d\n", isalnum('5'));
	printf("%d\n", isalnum(','));
	printf("%d\n", ft_isalnum('r'));
	printf("%d\n", ft_isalnum('T'));
	printf("%d\n", ft_isalnum('/'));
}*/
