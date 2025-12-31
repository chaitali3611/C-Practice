#include <stdio.h>
int main()
{
    int mark;
    printf("Enter the marks of the student: \n");
    scanf("%d", &mark);

    if (100>=mark>0 && mark <= 30)
    {
        printf("FAIL \n");
    }
    else if (mark > 30 && mark <=100)
    {
        printf("PASS \n");
    }
    else
    {
        printf("wrong marks.");
    }
    return 0;
    
}