#include <stdio.h>
int main(){
    int n, x, i, count;
    int arr[100];

    printf("Enter array size : ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find: ");
    scanf("%d", &x);

    for (i=0;i<n;i++){
        if (arr[i]==x){
            count++;
        }
    }
    printf("%d ocuurs %d times ", x, count);
    return 0;
}