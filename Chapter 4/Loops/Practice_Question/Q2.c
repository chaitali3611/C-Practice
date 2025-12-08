#include <stdio.h>
int main()
{
    int n, i, res;
    printf("Enter the number : ");
    scanf("%d", &n);
    do{
        res = i += (i+1);
        printf("Sum of natural number is %d\n.", res);
        i++;
    }while(i>n);
    return 0;
}