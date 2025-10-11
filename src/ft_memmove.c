#include "../includes/libft.h"

// copy n bytes from a memory area (src) to another (dest), protecting against overlap

void *ft_memmove(void *dest, const void *src, size_t n) {
    
    unsigned char *udest;
    const unsigned char *usrc;

    size_t i;

    udest = (unsigned char *)dest;
    usrc = (unsigned char *)src;

    if (udest > usrc) {
        i = n;
        while (i > 0) {
            udest[i - 1] = usrc[i - 1];
            i--;
        }
    } else {
        i = 0;
        while (i < n) {
            udest[i] = usrc[i];
            i++;
        }
    }

    return dest;
}