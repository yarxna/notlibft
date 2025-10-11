#include "../includes/libft.h"

// searches for a specific byte (c) in n bytes of a memory region (s).

void*  ft_memchr(const void *s, int c, size_t n) {
    const unsigned char *us;
    unsigned char uc;

    size_t i;

    us = (unsigned char *)s;
    uc = (unsigned char)c;

    i = 0;

    while (i < n) {
        if (us[i] == uc) {
            return ((void *) (us + i)); // here we return the POINTER to the position of the given byte that was found
        } 

        i++;
    }

    return (NULL);
}