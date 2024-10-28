/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvanderh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:08:02 by lvanderh          #+#    #+#             */
/*   Updated: 2024/10/19 19:04:03 by lvanderh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A' ) && (c <= 'Z')))
		return (1024);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%d\n", isalpha(45));
	printf("%d\n", isalpha('D'));
	printf("%d\n", isalpha('5'));
	printf("%d\n", ft_isalpha(45));
	printf("%d\n", ft_isalpha('?'));
	printf("%d\n", ft_isalpha('R'));
}*/
