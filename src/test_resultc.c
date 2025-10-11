#include "../includes/libft.h"
#include <stdio.h>

#define GREEN   "\033[0;32m"
#define RED     "\033[0;31m"
#define RESET   "\033[0m"

// test string results based on char pointer result/expected value
void test_resultc(int condition, const char* message, const char* result, const char* expected) {

    if (condition) {
        if (result != NULL) {
            printf(GREEN "[+] " RESET "%s : " GREEN "%s" RESET " (Expected: " GREEN "%s" RESET ")\n", message, result, expected);
        } else {
            printf(GREEN "[+] " RESET "%s : " GREEN "NULL" RESET " (Expected: " GREEN "%s" RESET ")\n", message, expected);
        }
	} else {
	    if (result != NULL) {
			printf(RED "[-] " RESET "%s : " RED "%s" RESET " (Expected: " RED "%s" RESET ")\n", message, result, expected);
        } else {
            printf(RED "[-] " RESET "%s : " RED "NULL" RESET " (Expected: " RED "%s" RESET ")\n", message, expected);
        }
	}   
}