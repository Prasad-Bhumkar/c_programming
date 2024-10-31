#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h> // For kbhit() and getch()
#include <unistd.h> // For usleep()

#define ROWS 25
#define COLS 80
#define CHAR_TO_PRINT '😊'  // Character to print (smiling face)
#define EMPTY_SPACE ' '      // Character for empty space

void printGrid() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            // Randomly decide whether to print the character or an empty space
            putchar((rand() % 2 == 0) ? CHAR_TO_PRINT : EMPTY_SPACE);
        }
        putchar('\n'); // Move to the next line after each row
    }
}

int main() {
    srand((unsigned int)time(NULL)); // Seed the random number generator

    while (!kbhit()) { // Loop until a key is pressed
        printGrid();   // Print the grid of characters
        usleep(200000); // Sleep for 200 milliseconds to slow down the output
        system("clear"); // Clear the console (use "cls" for Windows)
    }

    return 0;
}