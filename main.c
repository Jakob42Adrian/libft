/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jakobadrian <jakobadrian@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:07:19 by jadrian           #+#    #+#             */
/*   Updated: 2025/06/12 09:24:04 by jakobadrian      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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

    printf("\n=== ft_bzero ===\n");
    char b1[10] = "abcdefghi";
    char b2[10] = "abcdefghi";

    ft_bzero(b1 + 2, 3);
    bzero(b2 + 2, 3);

    printf("ft_bzero: %s\n", b1);
    printf("orig_bzero: %s\n", b2);

    printf("\n=== ft_memchr ===\n");
    char mem[] = "42Wolfsburg!";
    char *m1 = ft_memchr(mem, 'W', 10);
    char *m2 = ft_memchr(mem, 'z', 10);
    char *m3 = ft_memchr(mem, '\0', 20);

    printf("Suche nach 'W': %s\n", m1);         // → Wolfsburg!
    printf("Suche nach 'z': %p\n", (void *)m2); // → NULL
    printf("Nullterminator gefunden bei: %p\n", (void *)m3);

    printf("\n=== ft_memcmp ===\n");

    char a[] = "42Wolfsburg";
    char b[] = "42Wolfsburg";
    char c[] = "42WolfsBurg";
    char d[] = "42Wol";

    printf("Vergleich a vs b: %d\n", ft_memcmp(a, b, 11)); // → 0
    printf("Vergleich a vs c: %d\n", ft_memcmp(a, c, 11)); // → > 0 (s vs B)
    printf("Vergleich a vs d: %d\n", ft_memcmp(a, d, 4));  // → 0
    printf("Vergleich a vs d: %d\n", ft_memcmp(a, d, 6));  // → != 0

    printf("\n=== ft_atoi ===\n");

    printf("\"42\" = %d\n", ft_atoi("42"));                         // 42
    printf("\"   -123abc\" = %d\n", ft_atoi("   -123abc"));         // -123
    printf("\"+007\" = %d\n", ft_atoi("+007"));                     // 7
    printf("\"  +0\" = %d\n", ft_atoi("  +0"));                     // 0
    printf("\"abc\" = %d\n", ft_atoi("abc"));                       // 0
    printf("\"   +2147483647\" = %d\n", ft_atoi("   +2147483647")); // INT_MAX
    printf("\"   -2147483648\" = %d\n", ft_atoi("   -2147483648")); // INT_MIN

    printf("\n=== ft_calloc ===\n");

    int *arr = ft_calloc(5, sizeof(int));
    if (arr)
    {
        for (int i = 0; i < 5; i++)
            printf("arr[%d] = %d\n", i, arr[i]); // erwartet: alles 0
        free(arr);
    }
    else
        printf("ft_calloc returned NULL\n");

    printf("\n=== ft_strdup ===\n");

    // 1. Normaler String
    const char *s1 = "42Wolfsburg";
    char *dup1 = ft_strdup(s1);
    printf("Original: \"%s\"\n", s1);
    printf("Kopie   : \"%s\"\n", dup1);
    free(dup1);

    // 2. Leerer String
    const char *s2 = "";
    char *dup2 = ft_strdup(s2);
    printf("Original: \"%s\"\n", s2);
    printf("Kopie   : \"%s\"\n", dup2);
    free(dup2);

    // 3. String mit Leerzeichen
    const char *s3 = "   \tHello\n42\t";
    char *dup3 = ft_strdup(s3);
    printf("Original: \"%s\"\n", s3);
    printf("Kopie   : \"%s\"\n", dup3);
    free(dup3);

    // 4. Sehr langer String
    const char *s4 = "DiesIstEinSehrLangerTextDerSicherMehrAlsEinNormalesWortEnthältUndAuchZahlen1234567890";
    char *dup4 = ft_strdup(s4);
    printf("Original: \"%s\"\n", s4);
    printf("Kopie   : \"%s\"\n", dup4);
    free(dup4);
    return 0;
}
