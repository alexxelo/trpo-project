#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <cmath>
#include <iostream>
using namespace std;

class Menu {
public:
    int input();
    int sum(int a, int b);
    int subtraction(int a, int b);
    int multiplication(int a, int b);
    int division(int a, int b);
    int powerOfNumber(int a, int b);

};
#endif