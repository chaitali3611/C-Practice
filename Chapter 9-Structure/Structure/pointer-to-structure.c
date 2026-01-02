#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1 = {1664, 9.2, "Chaitali"};
    printf("name = %s\n", s1.name);

    struct student *ptr = &s1;
    {
        printf("name = %s\n", (*ptr).name);  //* put it always with the ptr otherwise it shows error
    };
    
    return 0;
}