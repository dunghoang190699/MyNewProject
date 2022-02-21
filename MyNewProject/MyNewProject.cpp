// MyNewProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "MyNewProject.h"


//print string with size provided
void printString(float *xString, int sizeOfString)
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
        std::cout << xString[i] << ", " << yString[i];
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



void processString(float* xString, int sizeOfString) {
    randomString(xString, sizeOfString);
    printString(xString, sizeOfString);
}

//Calculate distances between 2 points
void calculateDistant(int xID, int yID) {

}
int main()
{
    //declare variable
    float xString[STRINGLENGTH];
    float yString[STRINGLENGTH];


    srand(time(NULL));
    processString(xString, STRINGLENGTH);
    processString(yString, STRINGLENGTH);
    



    return 0;
}

