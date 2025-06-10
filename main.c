/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadrian <jadrian@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:07:19 by jadrian           #+#    #+#             */
/*   Updated: 2025/06/10 09:05:57 by jadrian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
    const char *s = "Hello World!";
    char *res;

    res = ft_strchr(s, 'o');
    if (res)
        printf("Erstes 'o': %s\n", res);   // → "o World!"
    else
        printf("'o' nicht gefunden\n");

    res = ft_strchr(s, 'z');
    printf("Suche nach 'z': %p\n", (void *)res); // → NULL

    res = ft_strchr(s, '\0');
    printf("Nullterminator: %p (Ende)\n", (void *)res);

    return 0;
}

