/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadrian <jadrian@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 01:44:04 by jadrian           #+#    #+#             */
/*   Updated: 2025/06/10 02:06:34 by jadrian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_len = 0;
	size_t src_len = 0;
	size_t i = 0;

	while (dst[dst_len] && dst_len < size)
		dst_len++;
	while (src[src_len])
		src_len++;

	if (dst_len == size)
		return (size + src_len);
	
	while (src[i] && dst_len + i + 1 < size)
	{
		dst[dst_len + 1] = src[i];
		i++;
	}
	
	if (dst_len + i < size)
		dst[dst_len +i] = '\0';

	return (dst_len + src_len);
}
