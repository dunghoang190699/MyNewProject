#pragma once

#include <iostream>
#include <stdio.h>

#include <cstdlib>
#include <ctime>

const int STRINGLENGTH = 10;

void printString(float* xString, int sizeOfString);

void printString(float* xString, float* yString, int sizeOfString);

void randomString(float* xString, int sizeOfString);

double calculateDistant(int xID, int yID);

void processString(float* xString, int sizeOfString);


double processFarthestString(float* xString, float* yString, int sizeOfString);