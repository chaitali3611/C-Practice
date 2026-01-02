#include <stdio.h>

struct address {
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

int main() {
    int i;
    struct address a[5];

    // Input address details
    for (i = 0; i < 5; i++) {
        printf("\nEnter details of address %d\n", i + 1);

        printf("Enter house number: ");
        scanf("%d", &a[i].houseNo);

        printf("Enter block: ");
        scanf("%d", &a[i].block);

        printf("Enter city: ");
        scanf("%s", a[i].city);

        printf("Enter state: ");
        scanf("%s", a[i].state);
    }

    // Display address details
    for (i = 0; i < 5; i++) {
        printf("\nAddress %d details:\n", i + 1);
        printf("House No: %d\n", a[i].houseNo);
        printf("Block: %d\n", a[i].block);
        printf("City: %s\n", a[i].city);
        printf("State: %s\n", a[i].state);
    }

    return 0;
}
