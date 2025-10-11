#ifndef LIBFT_H   
#define LIBFT_H

#include <stdlib.h>

void   color_string(const char* message);
void   test_result(int condition, const char* message, int result, int expected);
void   test_resultc(int condition, const char* message, const char* result, const char* expected);

void   ft_bzero(void *s, size_t n);
void*  ft_memset(void *s, int c, size_t n);
void*  ft_memchr(const void *s, int c, size_t n);
void*  ft_memcpy(void *dest, const void *src, size_t n);
void*  ft_memmove(void *dest, const void *src, size_t n);

int    ft_isalpha(int c);
int    ft_isdigit(int c);
int    ft_isalnum(int c);
int    ft_isascii(int c);
int    ft_isprint(int c);
int    ft_toupper(int c);
int    ft_tolower(int c);
int    ft_strcmp(const char *s1, const char *s2);
int    ft_memcmp(const void *s1, const void *s2, size_t n);
int    ft_strncmp(const char* s1, const char* s2, size_t n);

size_t ft_strlen(const char* s);
size_t ft_strlcpy(char* dst, const char* src, size_t size);
size_t ft_strlcat(char* dst, const char* src, size_t size);

char*  ft_strchr(const char* s, int c);
char*  ft_strrchr(const char* s, int c);
char*  ft_strnstr(const char* big, const char* little, size_t len);
char*  strnstr(const char *haystack, const char *needle, size_t len);

#endif