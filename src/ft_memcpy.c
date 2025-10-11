#include "../includes/libft.h"

// copy n bytes from a memory area (src) to another memory area (dest)

void*  ft_memcpy(void *dest, const void *src, size_t n) {

    unsigned char *udest;
    const unsigned char *usrc; // this one won't be changed

    udest = (unsigned char *)dest;
    usrc = (unsigned char *)src;

    size_t i;
    i = 0;

    while(i < n) {
        udest[i] = usrc[i];
        i++;
    }

    return (dest);
}