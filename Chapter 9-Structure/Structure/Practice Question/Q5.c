#include <stdio.h>

typedef struct bankAccount{
    int accountNo;
    char name[100];
}acc;

int main(){
    acc acc1 = {123, "Chaitali"};
    acc acc2 = {124, "Vaidehi"};
    acc acc3 = {125, "Dhanshree"};

    printf("acc no = %d\n", acc1.accountNo);
    printf("name = %s", acc1.name);
    return 0;
}