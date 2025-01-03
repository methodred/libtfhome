/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvanderh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:16:36 by lvanderh          #+#    #+#             */
/*   Updated: 2024/10/16 16:24:36 by lvanderh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if ((c >= 0) && (c <= 127))
		return (1);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%d\n", isascii('k'));
	printf("%d\n", isascii('L'));
	printf("%d\n", isascii('0'));
	printf("%d\n", ft_isascii('k'));
	printf("%d\n", ft_isascii('?'));
	printf("%d\n", ft_isascii(128));
}*/
