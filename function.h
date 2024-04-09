#ifndef FUNCTION_H
#define FUNCTION_H

struct Clothes {
    char material[40];
    int size;
    float price;
    char color[10];
};

void addClothes(struct Clothes *clothesArray, int arraySize);
void printClothes(struct Clothes *clothesArray, int arraySize);


#endif

