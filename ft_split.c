/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jakobadrian <jakobadrian@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 10:21:32 by jakobadrian       #+#    #+#             */
/*   Updated: 2025/06/15 12:26:25 by jakobadrian      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	wc;
	char	**arr;
	size_t	i;
	size_t	len;

	i = 0;
	wc = word_count(s, c);
	arr = ft_calloc(wc + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			len = 0;
			while (s[len] && s[len] != c)
				len++;
			arr[i++] = ft_substr(s, 0, len);
			s += len;
		}
	}
	arr[i] = NULL;
	return (arr);
}
