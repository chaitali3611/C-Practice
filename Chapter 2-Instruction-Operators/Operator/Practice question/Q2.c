#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number ");
    scanf("%d\n", &a);
    printf("%d", a%2==0);
    return 0;
}