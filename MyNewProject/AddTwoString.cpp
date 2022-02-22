// MyNewProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "MyNewProject.h"
#include <math.h>

//print string with size provided
void printString(float* xString, int sizeOfString)
{
    std::cout << "String x: " << std::endl;
    for (int i = 0; i < sizeOfString; i++) {
        std::cout << xString[i] << " ";
    }
    std::cout << std::endl;
}

//print 2 string represent lists of 2D points A(x,y)
void printString(float* xString, float* yString, int sizeOfString)
{
    std::cout << "List of points: " << std::endl;
    for (int i = 0; i < sizeOfString; i++) {
        std::cout << xString[i] << ", " << yString[i] << std::endl;
    }
    std::cout << std::endl;
}

//randomise value
void randomString(float* xString, int sizeOfString)
{


    for (int i = 0; i < sizeOfString; i++) {
        xString[i] = rand();
    }
}


//Calculate distances between 2 points
double calculateDistant(int xID1, int xID2, int yID1, int yID2) {
    return sqrt((xID1 - xID2) * (xID1 - xID2) + (yID1 - yID2) * (yID1 - yID2));
}

void processString(float* xString, int sizeOfString) {
    randomString(xString, sizeOfString);
    printString(xString, sizeOfString);
}

double processFarthestString(float* xString, float* yString, int sizeOfString) {
    double biggestVar = 0;
    double initialVar = 0;
    for (int i = 0; i < sizeOfString - 1; i++) {
        initialVar = calculateDistant(xString[i], xString[i + 1], yString[i], yString[i + 1]);
        if (biggestVar < initialVar) {
            biggestVar = initialVar;
        }
    }
    return biggestVar;
}




/*
int main()
{
    // declare variable
    float xString[STRINGLENGTH];
    float yString[STRINGLENGTH];


    srand(time(NULL));
    randomString(xString, STRINGLENGTH);
    randomString(yString, STRINGLENGTH);
    printString(xString, yString, STRINGLENGTH);
    std::cout << "the longest distance is: " << processFarthestString(xString, yString, STRINGLENGTH);
    // processString(xString, STRINGLENGTH);
    // processString(yString, STRINGLENGTH);




    return 0;
}*/