#include <stdio.h>

// Structure for Student
struct Student {
    int rollNo;
    char name[30];
    float cgpa;
};

// Structure for Teacher
struct Teacher {
    int id;
    char name[30];
    char subject[30];
};

// Structure for Staff
struct Staff {
    int id;
    char name[30];
    char department[30];
};

int main() {

    struct Student s;
    struct Teacher t;
    struct Staff st;

    // Student details
    printf("Enter Student Roll No: ");
    scanf("%d", &s.rollNo);

    printf("Enter Student Name: ");
    scanf("%s", s.name);

    printf("Enter Student CGPA: ");
    scanf("%f", &s.cgpa);

    // Teacher details
    printf("\nEnter Teacher ID: ");
    scanf("%d", &t.id);

    printf("Enter Teacher Name: ");
    scanf("%s", t.name);

    printf("Enter Subject: ");
    scanf("%s", t.subject);

    // Staff details
    printf("\nEnter Staff ID: ");
    scanf("%d", &st.id);

    printf("Enter Staff Name: ");
    scanf("%s", st.name);

    printf("Enter Department: ");
    scanf("%s", st.department);

    // Display Information
    printf("\n\n--- College Information ---\n");

    printf("\nStudent Details:\n");
    printf("Roll No: %d\nName: %s\nCGPA: %.2f\n", s.rollNo, s.name, s.cgpa);

    printf("\nTeacher Details:\n");
    printf("ID: %d\nName: %s\nSubject: %s\n", t.id, t.name, t.subject);

    printf("\nStaff Details:\n");
    printf("ID: %d\nName: %s\nDepartment: %s\n", st.id, st.name, st.department);

    return 0;
}
