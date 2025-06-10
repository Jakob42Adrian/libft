/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadrian <jadrian@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 02:10:13 by jadrian           #+#    #+#             */
/*   Updated: 2025/06/10 02:32:53 by jadrian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *ft_strrchr(const char *s, int c)
{
	int i = 0;
	const char *last = NULL;

	while (s[i])
	{
		if(s[i] == (char)c)
			last = &s[i];
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);

	return ((char *)last);
}
