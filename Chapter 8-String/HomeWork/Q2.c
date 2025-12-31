#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int freq[256] = {0};   // Frequency array for all characters
    int i, max = 0;
    char result;

    printf("Enter a string: ");
    gets(str);   // (For exam use; avoid in real programs)

    // Count frequency of each character
    for(i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }

    // Find character with highest frequency
    for(i = 0; i < 256; i++)
    {
        if(freq[i] > max)
        {
            max = freq[i];
            result = i;
        }
    }

    printf("Highest frequency character: %c\n", result);
    printf("Frequency: %d", max);

    return 0;
}
