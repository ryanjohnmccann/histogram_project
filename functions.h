#ifndef functions_h
#define functions_h

/* Reads single line of text and updates histogram
as well as frequency of most frequent letter */
void ReadText(int histo[], int *max);
/* Prints histogram, using array holding values
as well as frequency of most frequent letter,
which determines height of histogram */
void DrawHist(int histo[], int max);
/* Allows our scanf function to not be infinite
when invalid input is typed in. */
void removeJunk (void);
/* When the user would like to reset our letter count,
function allows us to set all array letter counts back to
0. */
void clearArr(int arrCleaner[]);
#endif

