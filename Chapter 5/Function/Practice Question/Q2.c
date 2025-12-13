#include <stdio.h>

void square(int n);

int main(){
    int n;
    printf("Enter the number for Square: \n");
    scanf("%d", &n);

    square(n);
    return 0;
}

void square(int n){
    printf("%d\n", n*n);
}
