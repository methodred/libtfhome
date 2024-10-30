/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvanderh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 20:51:40 by lvanderh          #+#    #+#             */
/*   Updated: 2024/10/30 22:24:26 by lvanderh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	if (n < 0)
		len++;
	if (n == 0)
		return (1);
	while (n != 0)
		n = n / 10;
	len++;
	return (len);
}

char	*ft_itoa(int n)
{
	int		limit;
	int		len;
	char	*dest;

	limit = 0;
	len = ft_len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	dest = malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	dest[len] = '\0';
	if (n == 0)
		dest[0] = '0';
	if (n < 0)
	{
		dest[limit++] = '-';
		n = -n;
	}
	while (len > limit)
	{
		dest[--len] = (n % 10) + '0';
		n = (n / 10);
	}
	return (dest);
}
