#include <stdio.h>

int main() {
    char alphabet[27];  // 26 letters + null terminator
    char *ptr;
    
    // Store the alphabet in array
    for (int i = 0; i < 26; i++) {
        alphabet[i] = 'A' + i;
    }
    alphabet[26] = '\0';  // Null terminator
    
    // Pointer to beginning of array
    ptr = alphabet;
    
    printf("English Alphabet:\n");
    
    // Print using pointer
    while (*ptr != '\0') {
        printf("%c ", *ptr);
        ptr++;  // Move to next character
    }
    
    printf("\n");
    return 0;
}