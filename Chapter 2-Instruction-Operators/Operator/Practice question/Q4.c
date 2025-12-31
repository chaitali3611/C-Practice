#include <stdio.h>
#include <stdio.h>
int main()
{
    int isSunday = 0;
    int isSnowing = 1;
    printf("%d \n", isSunday && isSnowing);

    int isMonday = 0;
    int isRaining = 1;
    printf("%d \n", isMonday || isRaining);

    int x;
    printf("enter the number ");
    scanf("%d \n", &x);
    printf("%d", 9<x && x<100);
    return 0;
}