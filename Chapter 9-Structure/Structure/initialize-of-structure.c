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

    return 0;
}