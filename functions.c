#include "functions.h"
#include <stdio.h>
#include <ctype.h>

/* Reads single line of text and updates histogram
 as well as frequency of most frequent letter */
void ReadText(int histo[], int *max) {
    /* currentChar defined as the current character in
    which ever array we are working with.*/
    char currentChar;
    /* charNumVal used to use a characters
    numerical value. largestArray defined as the largest
    array value in all 26 arrays. i used for our for loop
    to run through and compare every arrays values.*/
    int charNumVal, largestArray, i;
    charNumVal = 0;
    *max = 0;
    /* Loop to read each character the user types in and
    converts the character to its uppercase version of itself.
    After converts that letter to a numerical value and updates
    the approproate histo array value. */
    do {
        scanf("%c", &currentChar);
        if (isalpha(currentChar)) {
            currentChar = toupper (currentChar);
            int charNumVal = currentChar;
            histo[charNumVal - 65] += 1;
        }
    } while (currentChar != '\n');
    largestArray = histo[0];
    // Loop to find the greatest histo array value.
    for (i = 1; i < 26; i++) {
        if (histo [i] > largestArray)
            largestArray = histo [i];
    }
    *max = largestArray;
}
/* Prints histogram, using array holding values
 as well as frequency of most frequent letter,
 which determines height of histogram */
void DrawHist(int histo[], int max) {
    /* j defined to run our for loop as many times as
    the max value. k defined to run through each histo array
    and determine its printed output accordingly. */
    int j, k;
    // Loop to run as many times as our max value.
    for (j = max; j > 0; j--) {
        /* Loop to run through every single histo array
        and to update its printed output accordingly. */
        for (k = 0; k < 26; k++) {
            if (histo[k] >= j) {
                printf("| ");
            }
            else if (histo [k] < j)
                printf("  ");
        }
        printf("\n");
    }
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n");
    printf("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z\n");
}
// Removes any undesired input.
void removeJunk () {
    char junk;
    do {
        scanf("%c", &junk);
    } while (junk != '\n');
}
/* When the user would like to reset our letter count,
function allows us to set all array letter counts back to
0. */
void clearArr(int arrCleaner[]) {
    int i;
    for (i = 0; i < 26; i++) {
        arrCleaner[i] = 0;
    }
}

