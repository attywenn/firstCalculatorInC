#include <stdio.h>
#include <string.h>

int main() {
    char mainPw[20];
    char key[20];
    char yesno;

    printf("===== Welcome to my program! ======\n");
    printf("== Developed by: Wency (Computer Science Department - EARIST Manila) ==\n");

    do {
        printf("\nType your password: ");
        scanf("%s", mainPw);

        if (strcmp(mainPw, "attywenn") != 0) {
            printf("Invalid. Please try again.\n");
        }
    } while (strcmp(mainPw, "attywenn") != 0);

    printf("Welcome!\n");
    printf("This is another security checkpoint.\n");

    printf("Would you still proceed? (y/n): ");
    scanf(" %c", &yesno);  // Using %c for a single character

    if (yesno == 'y') {  
        printf("Go, proceed.\n");
    } else if (yesno == 'n') {
        printf("Thanks. Get out of here.\n");
        return 0;
    } else {
        printf("Invalid input.\n");
        return 0;
    }

    for (int i = 0; i < 10; i++) {
        printf("[System] Waiting code %d\n", i);
    }

    printf("Thank you for waiting, this is another security checkpoint:\n");
    printf("Please type your secondary privacy key: ");
    scanf("%s", key);

    return 0;
}

