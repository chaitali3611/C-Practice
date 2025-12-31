#include <stdio.h>

void printString(char arr[]);

int main(){
    char firstName[]="Chaitali";
    char LastName[]="Shirsath";

    printString(firstName);
    printString(LastName);

    return 0;
}

void printString(char arr[]){
    for(int i=0; arr[i]!='\0';i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}