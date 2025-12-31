#include <stdio.h>
int main(){
    int n, i, newElement;
    int arr[100];

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter new array element: ");
    scanf("%d", &newElement);

    arr[n] = newElement;
    n++;

    printf("Array after insertion : \n");
    for (i =0; i< n; i++){
        printf("%d", arr[i]);
    }
    return 0;
}