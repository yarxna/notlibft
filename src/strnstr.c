#include "../includes/libft.h"

// Reference implementation of strnstr for testing purposes
// This function is not included in the libft API. It replicates the BSD
// behavior of strnstr to validate the correctness of ft_strnstr.

char* strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i, j;

    if (*needle == '\0')
        return (char *)haystack;
    for (i = 0; haystack[i] && i < len; i++)
    {
        j = 0;
        while (needle[j] && i + j < len && haystack[i + j] == needle[j])
        {
            if (needle[j + 1] == '\0')
                return (char *)&haystack[i];
            j++;
        }
    }
    return NULL;
}