#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    system("cls");
    int cc[5] = {1, 0, 1, 2, 2}, uc, countuc = 0, countcc = 0;
    printf("\n\t*** Rock, Paper, Scissors ***\n");
    printf("\nYou have 5 chances.\n");
    printf("Computer is your opponent.\nWhoever gets more points out of 5 wins.\n");
    printf("Let's start!\n");

    for (int i = 0; i < 5; i++) {
        printf("\nChance %d\n", i + 1);
        printf("Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): ");
        scanf("%d", &uc);

        if (uc != 0 && uc != 2 && uc != 1) {
            printf("\nInvalid choice. Please enter a number between 0-2.\n");
            i--;
            continue;
        }

        // Printing computer's choice
        printf("  Computer chose: %d (%s)\n", cc[i], cc[i] == 0 ? "Rock" : cc[i] == 1 ? "Paper" : "Scissors");
        // Printing user's choice
        printf("  You chose: %d (%s)\n", uc, uc == 0 ? "Rock" : uc == 1 ? "Paper" : "Scissors");

        if (cc[i] == uc) {
            printf("  It's a tie!\n");
        } else if ((uc == 0 && cc[i] == 2) || (uc == 1 && cc[i] == 0) || (uc == 2 && cc[i] == 1)) {
            printf("  You got a point!\n");
            countuc++;
        } else {
            printf("  Computer gets a point!\n");
            countcc++;
        }
    }

    printf("\n   Your total points = %d\n", countuc);
    printf("   Computer's total points = %d\n", countcc);

    if (countuc > countcc) {
        printf("\t********************\n");
        printf("\t*      YOU WON!     *\n");
        printf("\t********************\n");
    } else if (countuc < countcc) {
        printf("\t********************\n");
        printf("\t*   COMPUTER WON!   *\n");
        printf("\t********************\n");
    } else {
        printf("\t********************\n");
        printf("\t*     IT'S A TIE!   *\n");
        printf("\t********************\n");
    }

    printf("\n\t*** GAME OVER! ***\n");
    return 0;
}
