#include <stdio.h>

int sum(int a, int b);
void printTable(int n);

int main(){
    int a, b;
    int n;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("\nEnter second number : ");
    scanf("%d", &b);
    printf("Enter number to print table: ");
    scanf("%d", &n);

    int s = sum(a, b);
    printf("\nsum is %d\n", s);
    return 0;
}

int sum(int x, int y){
    return x + y;
}