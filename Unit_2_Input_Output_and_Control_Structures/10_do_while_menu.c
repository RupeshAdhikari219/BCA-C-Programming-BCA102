#include <stdio.h>

int main(void)
{
    int choice;
    do {
        printf("\n1. Say hello\n2. Show a message\n0. Exit\nChoice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: printf("Hello!\n"); break;
            case 2: printf("Welcome to C programming.\n"); break;
            case 0: printf("Program ended.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 0);

    return 0;
}
