#include <stdio.h>  //Library function
int main()
{
    int a, b; //declare variable
    printf("Enter the sides of the rectangle: ");
    scanf("%d%d", &a, &b);  //Accept variables
    printf("Perimeter of the rectangle is %d", 2*(a+b));  //Print result
    return 0;  //sucessful execution
}