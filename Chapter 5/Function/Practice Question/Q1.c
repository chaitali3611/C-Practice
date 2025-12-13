#include <stdio.h>
void India();
void French();

int main(){
    char ch;
    printf("Enter the nationality f if french or i if indian: \n");
    scanf("%c", &ch);

    if('i'==ch){
    India();
    }
    else{
    French();
    }
    return 0;
}

void India(){
    printf("Namaste\n");
}

void French(){
    printf("Bonjour\n");
}