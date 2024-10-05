#include <stdio.h>

enum Color {
    RED,
    GREEN,
    BLUE,
    BLACK,
    WHITE,
    YELLOW,
    COLOR_COUNT // This helps track the number of colors
};

const char* colorNames[COLOR_COUNT] = {
    "Red",
    "Green",
    "Blue",
    "Black",
    "White",
    "Yellow"
};

int main() {
    enum Color bgcolor;

    for (bgcolor = RED; bgcolor < COLOR_COUNT; bgcolor++) {
        printf("%d: %s\n", bgcolor+1, colorNames[bgcolor]);
    }

    return 0;
}
