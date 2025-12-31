#include <stdio.h>
int main(){
    int n, i, max;
    int arr[100];

    printf ("Enter the array size: ");
    scanf("%d", &n);

    printf ("Enter %d array elementes: ", n);
    for (i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for (i = 1; i<n;i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    printf("Greatest number is %d", max);
    return 0;
}