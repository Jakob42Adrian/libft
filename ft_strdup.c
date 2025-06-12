/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jakobadrian <jakobadrian@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 09:08:52 by jakobadrian       #+#    #+#             */
/*   Updated: 2025/06/12 09:18:59 by jakobadrian      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

size_t ft_strlen(const char *s);

char *ft_strdup(const char *s1)
{
    char *copy;
    size_t len;
    size_t i;

    len = ft_strlen(s1);
    copy = malloc(len + 1);
    if (!copy)
        return (NULL);
    i = 0;
    while (i < len)
    {
        copy[i] = s1[i];
        i++;
    }
    copy[i] = '\0';
    return (copy);
}
