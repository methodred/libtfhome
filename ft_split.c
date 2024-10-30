/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvanderh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 23:34:29 by lvanderh          #+#    #+#             */
/*   Updated: 2024/10/30 19:02:48 by lvanderh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_free(char **str)
{
	size_t	i;

	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
	str[i] = NULL;
}

static char	*ft_cpy_str(const char *str, char c, size_t *start)
{
	size_t	end;
	char	*word;

	end = *start;
	while (str[end] && str[end] != c)
		end++;
	word = ft_substr(str, *start, end - *start);
	*start = end;
	return (word);
}

static size_t	ft_count_word(const char *s, char c)
{
	size_t		i;
	size_t		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static void	ft_next_word(const char *s, char c, size_t *start)
{
	while (s[*start] && s[*start] == c)
		*start += 1;
}

char	**ft_split(char const *s, char c)
{
	char		**str;
	size_t		i;
	size_t		start;

	start = 0;
	i = 0;
	if (!s)
		return (NULL);
	str = malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (!str)
		return (NULL);
	while (i < ft_count_word(s, c))
	{
		ft_next_word(s, c, &start);
		if (s[start])
		{
			str[i] = ft_cpy_str(s, c, &start);
			if (!str[i])
				return (ft_free(str), NULL);
			i++;
		}
	}
	str[i] = NULL;
	return (str);
}
