#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);   // accepts string with spaces

    printf("You entered: %s", str);
    return 0;
}
