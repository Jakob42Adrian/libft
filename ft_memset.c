/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadrian <jadrian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 13:31:33 by jadrian           #+#    #+#             */
/*   Updated: 2025/06/10 13:49:01 by jadrian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *temp;

    temp = (unsigned char *)b;
    while (len--)
        *temp++ = (unsigned char)c;
    return (b);

}