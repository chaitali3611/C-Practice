#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);   // For exam use

    for(i = 0; str[i] != '\0'; i++)
    {
        // If lowercase, convert to uppercase
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = toupper(str[i]);
        }
        // If uppercase, convert to lowercase
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = tolower(str[i]);
        }
    }

    printf("Modified string: %s", str);

    return 0;
}