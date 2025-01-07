#include <stdio.h>
#include "Cstring.h"

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char buffer[100];

    // Test Strlen
    printf("Function: Strlen\n");
    int length1 = Strlen(str1);
    printf("Result: %d\n\n", length1);

    // Test Strcpy
    printf("Function: Strcpy\n");
    Strcpy(buffer, str1);
    printf("Result: %s\n\n", buffer);

    // Test Strcmp
    printf("Function: Strcmp\n");
    int cmp = Strcmp(str1, str2);
    printf("Result: %d\n\n", cmp); // 0 if equal, < 0 if str1 < str2, > 0 if str1 > str2

    // Test Strcat
    printf("Function: Strcat\n");
    Strcat(str1, str2);
    printf("Result: %s\n\n", str1);

    return 0;
}
