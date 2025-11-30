#include<stdio.h>
int main()
{
    //This program shows how data types works in C
    /*
    This is a
    multi-line comment.
    */

    // OUTPUT
    int number = 25;
    char c = 'C';
    int age = 17;
    float pi = 3.14;

    printf("number is %d\n", number);
    printf("character is %c\n", c);
    printf("age is %d\n", age);
    printf("value of pi is %f\n", pi);

    // INPUT
    int number;
    printf("Enter number : ");
    scanf("%d", &number);
    printf("The number is %d", number);

    // INPUT & OUTPUT
    int a, b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("sum is =%d", a + b);
return 0;
}