/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jakobadrian <jakobadrian@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 01:08:14 by jakobadrian       #+#    #+#             */
/*   Updated: 2025/06/12 23:41:13 by jakobadrian      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *tmp;
    const unsigned char *s;

    tmp = (unsigned char *)dst;
    s = (const unsigned char *)src;

    tmp = (unsigned char *)dst;
    s = (const unsigned char *)src;
    if (dst <= src)
    {
        while (len--)
            *tmp++ = *s++;
    }
    else
    {
        tmp += len;
        s += len;
        while (len--)
            *--tmp = *--s;
    }
    return ((void *)dst);
}
