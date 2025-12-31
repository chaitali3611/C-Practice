#include <stdio.h>
#include<math.h>
int main()
{
    int a, b, c, avg;
    printf("Enter the numbers ");
    scanf("%d%d%d", &a, &b, &c);
    avg = (a+b+c)/3;
    printf("%d\n", avg);
    return 0;
}