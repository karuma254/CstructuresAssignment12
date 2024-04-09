#include <stdio.h>
#include "function.h"

int main() 
{
    int arraySize = 10;
    struct Clothes clothesArray[arraySize];
    addClothes(clothesArray, arraySize);
    printClothes(clothesArray, arraySize);
    return 0;
}

