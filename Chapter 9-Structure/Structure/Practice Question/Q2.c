#include <stdio.h>

struct address {
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

void printAdd(struct address add);

int main() {
    struct address adds[5];

    printf("Enter info for person 1 : ");
    scanf("%d", &adds[0].houseNo);
    
    return 0;
}
