#include <stdio.h>
#include <ctype.h>
#include "functions.h"

int main() {
    /* userCommand defined as what the user would like the program
    to do using the given four commands. */
    char userCommand;
    int myMax, myHist[26];
    myMax = 0;
    /* Originally sets all of our array letter
    counts to 0. */
     clearArr(myHist);
    // Loop to run until user wishes to enter the quit command.
    do {
        printf("Enter command (C, R, P, or Q): ");
        scanf(" %c", &userCommand);
         // Switch statement for all cases of command input.
        switch (userCommand) {
            // Case to clear myMax, myHist, and histogram.
            case 'C':
            case 'c':
                clearArr(myHist);
                myMax = 0;
                break;
            // Case to read user input and update myHist and myMax accordingly.
            case 'R':
            case 'r':
                printf("ENTER A LINE OF TEXT:\n\n");
                scanf("%d", myHist);
                ReadText(myHist, &myMax);
                break;
            // Case to print histogram.
            case 'P':
            case 'p':
                printf("LETTER FREQUENCIES IN TEXT:\n\n");
                DrawHist(myHist, myMax);
                break;
            // Case to error check userCommand input.
            default:
                if (userCommand != 'Q' && userCommand != 'q') {
                    printf("Invalid command %c\n", userCommand);
                    removeJunk();
                }
                    break;
        }
    } while (userCommand != 'Q' && userCommand != 'q');
    return 0;
}

