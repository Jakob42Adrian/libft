/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadrian <jadrian@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 01:19:31 by jadrian           #+#    #+#             */
/*   Updated: 2025/06/10 01:35:47 by jadrian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i = 0;
	
	if (!dst || !src)
		return (0);
	
	while (src[i] && i + 1 < size)
	{
		dst[i] = src[i];
		i++;
	}
	
	if (size > 0)
		dst[i] = '\0';
	
	while (src[i])
		i++;
	return (i);
}
