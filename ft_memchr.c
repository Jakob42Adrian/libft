/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jakobadrian <jakobadrian@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 07:46:18 by jakobadrian       #+#    #+#             */
/*   Updated: 2025/06/12 07:49:49 by jakobadrian      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *ptr = (const unsigned char *)s;

    while (n--)
    {
        if (*ptr == (unsigned char)c)
            return ((void *)ptr);
        ptr++;
    }
    return (NULL);
}