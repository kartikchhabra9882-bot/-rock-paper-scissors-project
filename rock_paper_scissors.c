#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int userChoice, computerChoice;
    char playAgain;

    printf("===== Rock Paper Scissors Game =====\n");

    do
    {
        printf("\nChoose an option:\n");
        printf("1. Rock\n2. Paper\n3. Scissors\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &userChoice);

        if (userChoice < 1 || userChoice > 3)
        {
            printf("Invalid choice. Please enter 1, 2, or 3.\n");
            continue;
        }

        srand(time(NULL));
        computerChoice = (rand() % 3) + 1;

        printf("You chose: ");
        if (userChoice == 1) printf("Rock\n");
        else if (userChoice == 2) printf("Paper\n");
        else printf("Scissors\n");

        printf("Computer chose: ");
        if (computerChoice == 1) printf("Rock\n");
        else if (computerChoice == 2) printf("Paper\n");
        else printf("Scissors\n");

        if (userChoice == computerChoice)
        {
            printf("\nIt's a draw!\n");
        }
        else if ((userChoice == 1 && computerChoice == 3) ||
                 (userChoice == 2 && computerChoice == 1) ||
                 (userChoice == 3 && computerChoice == 2))
        {
            printf("\nYou win!\n");
        }
        else
        {
            printf("\nComputer wins!\n");
        }

        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("\nThanks for playing!\n");
    return 0;
}
