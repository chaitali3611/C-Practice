#include <stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main(){
    int x = 3, y = 5;
    int p=4, q=6;
    swap(x, y);
    printf("x = %d & y = %d\n", x, y);
    _swap(&p, &q);
    printf("p = %d & q = %d\n", p, q);
    return 0;
}

//call by refence
void _swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

//call by value
void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
    printf("a = %d & b = %d\n", a, b);
}