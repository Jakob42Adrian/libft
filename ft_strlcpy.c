/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jakobadrian <jakobadrian@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 01:19:31 by jadrian           #+#    #+#             */
/*   Updated: 2025/06/12 23:41:50 by jakobadrian      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
