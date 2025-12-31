#include <stdio.h>

void storeTable(int arr[][], int n, int m, int nnumber);

int main(){
    int tables[2][10];
    storeTalble(tables, 0, 10, 2);
    storeTalble(tables, 1, 10, 3);
    return 0;
}

void storeTable(int arr[][], int n, int m; int number){
    for (int i=0; i<m; i++){
    arr[n][m] = number * (i+1);
}
} 