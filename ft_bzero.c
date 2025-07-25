/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jakobadrian <jakobadrian@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 07:37:05 by jakobadrian       #+#    #+#             */
/*   Updated: 2025/06/15 13:07:57 by jakobadrian      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	

fgf ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = 0;
}
