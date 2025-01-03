/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvanderh <lvanderh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:53:08 by lvanderh          #+#    #+#             */
/*   Updated: 2025/01/03 20:13:11 by lvanderh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	int		j;
	char *str;

	str = malloc(sizeof(char) * (ft_strlen(s1)) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	i = 0;
	if (s1)
	{
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
	}
	j = -1;
	if (s2)
		while (s2[++j])
			str[i++] = s2[j];
	str[i] = '\0';
	return (str);
}
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dest;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb != (nmemb * size) / size)
		return (NULL);
	dest = malloc(sizeof(char) * (nmemb * size));
	if (!dest)
		return (NULL);
	ft_memset(dest, 0, nmemb * size);
	return (dest);
}
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *p;
	size_t 			i;

	i = 0;
	p = (unsigned char*)s;
	while (i < n)
		p[i++] = c;
	return (s);
}