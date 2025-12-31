#include<stdio.h>

void maxNum(int *a, int *b);

int main(){
    int a, b;
    printf("Enter values of a & b : ");
    scanf("%d%d", &a, &b);

    maxNum(&a, &b);

    return 0;

}

void maxNum(int *a, int *b){
    if(*a > *b){
        printf("a is greater than b");
    }
    else {
        printf("b is greater than a");
    }
}