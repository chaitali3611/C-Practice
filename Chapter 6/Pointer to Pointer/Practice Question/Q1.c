#include <stdio.h>
int main(){
    int i = 12;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d", **pptr);
    return 0;
}