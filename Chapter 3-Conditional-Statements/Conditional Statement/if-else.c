#include <stdio.h>
int main()
{
    int age;
    printf("enter age : ");
    scanf("%d", &age);

    if(age>18)
    {
        printf("adult \n");
    }
    else
    {
        printf("Not adult \n");
    }

    printf("Thank you");
    return 0;
}