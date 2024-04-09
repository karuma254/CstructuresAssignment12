#include <stdio.h>
#include "function.h"


// Function adding clothes 
void addClothes(struct Clothes *clothesArray, int arraySize) 
{
    for (int i = 0; i < arraySize; i++) {
        printf("Enter details for Clothes %d:\n", i + 1);
        printf("Material: ");
        scanf("%s", clothesArray[i].material);
        printf("Size: ");
        scanf("%d", &clothesArray[i].size);
        printf("Price: ");
        scanf("%f", &clothesArray[i].price);
        printf("Color: ");
        scanf("%s", clothesArray[i].color);
    }
}

/*Function to print the structure elements*/
void printClothes(struct Clothes *clothesArray, int arraySize) {
    printf("\nClothes Details:\n");
    for (int i = 0; i < arraySize; i++) {
        printf("Clothes %d:\n", i + 1);
        printf("Material: %s\n", clothesArray[i].material);
        printf("Size: %d\n", clothesArray[i].size);
        printf("Price: $%.2f\n", clothesArray[i].price);
        printf("Color: %s\n", clothesArray[i].color);
    }
}

