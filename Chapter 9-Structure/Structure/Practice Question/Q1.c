#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.roll = 2211;
    s1.cgpa = 9.2;
    // s1.name = "Chaitali";
    strcpy(s1.name, "Chaitali");

    printf("Student name = %s\n", s1.name);
    printf("Student roll no = %d\n", s1.roll);
    printf("Student cgpa = %f\n", s1.cgpa);
    
    struct student s2;
    s2.roll = 2122;
    s2.cgpa = 9.0;
    // s2.name = "Vaidehi";
    strcpy(s2.name, "Vaidehi");

    printf("Student name = %s\n", s2.name);
    printf("Student roll no = %d\n", s2.roll);
    printf("Student cgpa = %f\n", s2.cgpa);

    struct student s3;
    s3.roll = 1011;
    s3.cgpa = 9.1;
    // s3.name = "Dhanshree";
    strcpy(s3.name, "Dhanshree");

    printf("Student name = %s\n", s3.name);
    printf("Student roll no = %d\n", s3.roll);
    printf("Student cgpa = %f\n", s3.cgpa);

    return 0;
}
