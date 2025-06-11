/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jakobadrian <jakobadrian@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:07:19 by jadrian           #+#    #+#             */
/*   Updated: 2025/06/11 03:21:25 by jakobadrian      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    printf("\n=== ft_is* Funktionen ===\n");
    printf("ft_isalpha('A') = %d\n", ft_isalpha('A'));
    printf("ft_isalpha('1') = %d\n", ft_isalpha('1'));
    printf("ft_isdigit('9') = %d\n", ft_isdigit('9'));
    printf("ft_isdigit('a') = %d\n", ft_isdigit('a'));
    printf("ft_isalnum('Z') = %d\n", ft_isalnum('Z'));
    printf("ft_isalnum('!') = %d\n", ft_isalnum('!'));
    printf("ft_isascii(127) = %d\n", ft_isascii(127));
    printf("ft_isascii(200) = %d\n", ft_isascii(200));
    printf("ft_isprint(32) = %d\n", ft_isprint(32));
    printf("ft_isprint(31) = %d\n", ft_isprint(31));

    printf("\n=== ft_toupper / ft_tolower ===\n");
    printf("ft_toupper('b') = %c\n", ft_toupper('b'));
    printf("ft_toupper('@') = %c\n", ft_toupper('@'));
    printf("ft_tolower('X') = %c\n", ft_tolower('X'));
    printf("ft_tolower('5') = %c\n", ft_tolower('5'));

    printf("\n=== ft_strlen ===\n");
    printf("ft_strlen(\"\") = %zu\n", ft_strlen(""));
    printf("ft_strlen(\"hello\") = %zu\n", ft_strlen("hello"));

    printf("\n=== ft_strchr / ft_strrchr ===\n");
    printf("ft_strchr(\"42Wolfsburg\", 'W') = %s\n", ft_strchr("42Wolfsburg", 'W'));
    printf("ft_strchr(\"abc\", 'x') = %s\n", ft_strchr("abc", 'x'));
    printf("ft_strchr(\"test\\0data\", '\\0') = %s\n", ft_strchr("test", '\0'));
    printf("ft_strrchr(\"abcabcabc\", 'a') = %s\n", ft_strrchr("abcabcabc", 'a'));

    printf("\n=== ft_strncmp ===\n");
    printf("ft_strncmp(\"abc\", \"abc\", 3) = %d\n", ft_strncmp("abc", "abc", 3));
    printf("ft_strncmp(\"abc\", \"abd\", 2) = %d\n", ft_strncmp("abc", "abd", 2));
    printf("ft_strncmp(\"abc\", \"\", 0) = %d\n", ft_strncmp("abc", "", 0));

    printf("\n=== ft_strnstr ===\n");
    printf("ft_strnstr(\"HalloWelt\", \"Welt\", 9) = %s\n", ft_strnstr("HalloWelt", "Welt", 9));
    printf("ft_strnstr(\"HalloWelt\", \"X\", 9) = %s\n", ft_strnstr("HalloWelt", "X", 9));
    printf("ft_strnstr(\"Hallo\", \"\", 5) = %s\n", ft_strnstr("Hallo", "", 5));
    printf("ft_strnstr(\"abc\", \"abcdef\", 3) = %s\n", ft_strnstr("abc", "abcdef", 3));

    printf("\n=== ft_memset ===\n");
    char buffer1[10] = "abcdefghi";
    ft_memset(buffer1 + 3, 'X', 2);
    printf("ft_memset: %s\n", buffer1);

    printf("\n=== ft_memcpy ===\n");
    char buffer2[10] = "abcdefgh";
    ft_memcpy(buffer2 + 2, "XYZ", 3);
    printf("ft_memcpy: %s\n", buffer2);
    ft_memcpy(NULL, NULL, 0); // erlaubt

    printf("\n=== ft_memmove ===\n");
    char buffer3[20] = "123456789";
    ft_memmove(buffer3 + 2, buffer3, 5);
    printf("ft_memmove: %s\n", buffer3);
    ft_memmove(NULL, NULL, 0); // erlaubt

    return 0;
}
