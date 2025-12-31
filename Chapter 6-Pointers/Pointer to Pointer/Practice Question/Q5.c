#include <stdio.h>
#include <stdlib.h>
int main(){
    int num, i;

    printf("Enter the value of num: ");
    scanf("%d", &num);

    int *arr = (int *)malloc(num * sizeof(int));

    if(arr == NULL){
        return 1;
    }

    printf("Enter array elements: \n");
    for(int i=0; i<num; i++){
    scanf("%d", arr+i);
    }

    int start=0, end=num-1;
    while (start<end) {
        int temp = *(arr + start);
        *(arr + start) = *(arr + end);
        *(arr + end) = temp;

        start ++;
        end --;
    }

    for(int i=0;i<num;i++){
    printf("%d", *(arr+i));
    }

    free(arr);
    return 0;
}