#include "../includes/libft.h"

// compares n bytes of two memory blocks (s1 and s2) byte by byte.

int ft_memcmp(const void *s1, const void *s2, size_t n) {
    const unsigned char *us1;
    const unsigned char *us2;

    size_t i;

    us1 = (const unsigned char *)s1;
    us2 = (const unsigned char *)s2;

    i = 0;

    while (i < n) { // it could be better, I know
        if (us1[i] != us2[i]) { 
            return (us1[i] < us2[i]) ? -1 : 1; 
        }
        i++;
    }

    return (0);
}