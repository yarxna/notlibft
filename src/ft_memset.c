#include "../includes/libft.h"

// fills a memory region (s) with n bytes (c), then returns the memory region

void*  ft_memset(void *s, int c, size_t n) {

    unsigned char *ptr;
    size_t i;

    ptr = (unsigned char *)s;
    i = 0;

    while (i < n) { // first I made a for loop, but then used while instead
        ptr[i] = (unsigned char)c;
        i++;
    }

    return (s); // here I started to follow "best practices"
}