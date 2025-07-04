#include <stdio.h>
#include <string.h>
struct address {
    int houseNo;
    int block;
    char city[100];
    char state[100];
};
void printads(struct address ass[5]);
int main() {
    struct address ass[5];
    printf("Enter address (house no, block, city, state) of 5 people:\n");
    for (int i = 0; i < 5; i++) {
        printf("Person %d:\n", i + 1);
        printf("House Number: ");
        scanf("%d", &ass[i].houseNo);
        printf("Block: ");
        scanf("%d", &ass[i].block);
        getchar();  // clear newline after scanf
        printf("City: ");
        fgets(ass[i].city, sizeof(ass[i].city), stdin);
        ass[i].city[strcspn(ass[i].city, "\n")] = 0;
        printf("State: ");
        fgets(ass[i].state, sizeof(ass[i].state), stdin);
        ass[i].state[strcspn(ass[i].state, "\n")] = 0;
    }
    printads(ass);
    return 0;
}
void printads(struct address ass[5]) {
    for (int i = 0; i < 5; i++) {
        printf("\n***Details of Person %d:***\n", i + 1);
        printf("House Number: %d\n", ass[i].houseNo);
        printf("Block: %d\n", ass[i].block);
        printf("City: %s\n", ass[i].city);
        printf("State: %s\n", ass[i].state);
    }
}
