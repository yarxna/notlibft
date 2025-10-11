# Roadmap

Libraries will be done following this sequence as much as possible (where applicable)

|    |Basic Character / String Functions | Description | 
|----|-----------|-----------------------------------|
| ✅ |[ft_isalpha](../src/ft_isalpha.c) | checks if character is alphabetic |
| ✅ |[ft_isdigit](../src/ft_isdigit.c) | checks if character is a digit|
| ✅ |[ft_isalnum](../src/ft_isalnum.c) | checks if character is alphanumeric|
| ✅ |[ft_isascii](../src/ft_isascii.c) | checks if character is ASCII|
| ✅ |[ft_isprint](../src/ft_isprint.c) | checks if character is printable|
| ✅ |[ft_toupper](../src/ft_toupper.c) | converts to uppercase|
| ✅ |[ft_tolower](../src/ft_tolower.c) | converts to lowercase|
| ✅ |[ft_strlen](../src/ft_strlen.c)   | string length|
| ✅ |[ft_strchr](../src/ft_strchr.c)   | finds first occurrence of character in string|
| ✅ |[ft_strrchr](../src/ft_strrchr.c) | finds last occurrence of character in string|
| ✅ |[ft_strncmp](../src/ft_strncmp.c) | compares strings up to n bytes|
| ✅ |[ft_strnstr](../src/ft_strnstr.c) | finds substring in string|
| ✅ |[ft_strlcpy](../src/ft_strlcpy.c) | copies string with size limit|
| ✅ |[ft_strlcat](../src/ft_strlcat.c) | concatenates strings with size limit|

|     |Memory Functions | Description |
|-----|---------------|---------------|
| ✅ |[ft_memset](../src/ft_memset.c) | fills memory with a byte
| ✅ |[ft_bzero](../src/ft_bzero.c) | fills memory with zero
| ✅ |[ft_memcpy](../src/ft_memcpy.c) | copies memory
| ✅ |[ft_memmove](../src/ft_memmove.c) | copies memory with overlap handling
| ✅ |[ft_memchr](../src/ft_memchr.c) | searches for byte in memory
| ✅ |[ft_memcmp](../src/ft_memcmp.c) | compares memory blocks

| |Memory Allocation | Description |
|-----|--------------|-------------|
| ❌ | ft_calloc |allocates and zeroes memory|
| ❌ | ft_strdup |duplicates string|

|  |Conversions / Numbers | Description |
|----|----------------------|-------------|
| ❌ |ft_atoi | converts string to integer
| ❌ |ft_itoa | converts integer to string more challenging

| |Output Functions | Description |
|-|-----------------|-------------|
| ❌ |ft_putchar_fd | prints character to file descriptor |
| ❌ |ft_putstr_fd | prints string to file descriptor |
| ❌ |ft_putendl_fd | prints string + newline to file descriptor |
| ❌ |ft_putnbr_fd | prints number to file descriptor challenging |

| | Advanced Functions | Description |
|-|-------------------------------|-------------|
| ❌ | ft_split | splits string into array of strings  |
| ❌ | ft_strtrim | trims characters from start/end of string |
| ❌ | ft_substr | extracts substring |
| ❌ | ft_strjoin | concatenates two strings |
| ❌ | ft_strmapi | applies function to each character |
| ❌ | ft_striteri | applies function with index to each character |
