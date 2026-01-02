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
        printf("name = %s\n", (*ptr).name);
    };

    printf("student->roll = %d\n", ptr->roll);
    printf("student->name = %s\n", ptr->name);
    printf("student->cgpa = %f\n", ptr->cgpa);
    
    return 0;
}