#include <stdio.h>
int main(){
    char name[100];
    gets(name);
    puts(name); 
    printf("%d", strlen(name));
    return 0;
}