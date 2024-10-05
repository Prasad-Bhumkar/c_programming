#include <stdio.h>

// Enum for magazines
typedef enum {
    FASHION,
    SCIENCE,
    TRAVEL,
    SPORTS
} MagazineCategory;

// Enum for novels
typedef enum {
    FICTION,
    NON_FICTION,
    MYSTERY,
    FANTASY
} NovelCategory;

// Enum for encyclopaedia
typedef enum {
    GENERAL,
    SCIENTIFIC,
    HISTORICAL,
    ART
} EncyclopaediaCategory;

// Enum for cooking
typedef enum {
    BAKING,
    GRILLING,
    VEGETARIAN,
    DESSERTS
} CookingCategory;

const char* magazineNames[] = {
    "Fashion",
    "Science",
    "Travel",
    "Sports"
};

const char* novelNames[] = {
    "Fiction",
    "Non-Fiction",
    "Mystery",
    "Fantasy"
};

const char* encyclopaediaNames[] = {
    "General",
    "Scientific",
    "Historical",
    "Art"
};

const char* cookingNames[] = {
    "Baking",
    "Grilling",
    "Vegetarian",
    "Desserts"
};

int main() {
    // Example usage for magazines
    printf("Magazine Categories:\n");
    for (MagazineCategory category = FASHION; category <= SPORTS; category++) {
        printf("%d: %s\n", category, magazineNames[category]);
    }

    // Example usage for novels
    printf("\nNovel Categories:\n");
    for (NovelCategory category = FICTION; category <= FANTASY; category++) {
        printf("%d: %s\n", category, novelNames[category]);
    }

    // Example usage for encyclopaedia
    printf("\nEncyclopaedia Categories:\n");
    for (EncyclopaediaCategory category = GENERAL; category <= ART; category++) {
        printf("%d: %s\n", category, encyclopaediaNames[category]);
    }

    // Example usage for cooking
    printf("\nCooking Categories:\n");
    for (CookingCategory category = BAKING; category <= DESSERTS; category++) {
        printf("%d: %s\n", category, cookingNames[category]);
    }

    return 0;
}
