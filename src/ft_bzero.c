#include "../includes/libft.h"

// fills n bytes of memory (s) with 0. Here I used memset for this.

void ft_bzero(void *s, size_t n) {
    
    ft_memset(s, 0, n);
}