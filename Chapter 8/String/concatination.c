#include <stdio.h>
int main(){
    char firstStr[100] = "Hello ";
    char secStr[100] = "World";
    strcat(firstStr, secStr);
    puts(firstStr);
    return 0;
}