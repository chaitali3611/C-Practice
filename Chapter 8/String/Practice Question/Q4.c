#include <stdio.h>
int main(){
    char pass[100];
    scanf("%s", &pass);
    char salt[] = "123";

    strcpy(newpass, pass);
    strcat(newpass, salt);
    printf("%s", newpass);
    return 0;
}