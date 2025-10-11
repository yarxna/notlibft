#include "../includes/libft.h"
#include <stdio.h>

#define GREEN   "\033[0;32m"
#define RED     "\033[0;31m"
#define RESET   "\033[0m"

// test string results based on int result/expected value
void test_result(int condition, const char* message, int result, int expected) {

    if (condition) {
        printf(GREEN "[+] " RESET "%s : " GREEN "%d" RESET " (Expected: " GREEN "%d" RESET ")\n", message, result, expected);
    } else {
        printf(RED "[-] " RESET "%s : " RED "%d" RESET " (Expected: " RED "%d" RESET ")\n", message, result, expected);
    }
}