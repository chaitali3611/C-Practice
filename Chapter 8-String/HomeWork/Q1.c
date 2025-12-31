#include <stdio.h>
#include <string.h>
#include <ctype.h>   // for toupper()

int main()
{
    char str1[] = "Chaitali";
    int i;

    for(i = 0; i < strlen(str1); i++)
    {
        // Check if character is a vowel
        if(str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' ||
            str1[i] == 'o' || str1[i] == 'u')
        {
            str1[i] = toupper(str1[i]);  // Convert vowel to uppercase
        }
    }

    printf("New string is %s", str1);
    return 0;
}
