#include <stdio.h>

int main()
{
    char str[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);   // For exam use

    // Remove spaces
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';   // End the string

    printf("String without spaces: %s", str);

    return 0;
}
