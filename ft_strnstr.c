/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jakobadrian <jakobadrian@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:42:28 by jakobadrian       #+#    #+#             */
/*   Updated: 2025/06/11 00:35:12 by jakobadrian      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i = 0;
    size_t j;
    
    if (!*needle)
        return ((char *)haystack);

    while (haystack[i] && i < len)
    {
        j = 0;
        while (needle[j] && haystack[i + j] == needle[j] && (i + j) < len)
        {
            j++;
        }
        if (!needle[j])
            return ((char *)&haystack[i]);
        i++;
    }
    return (0);
}