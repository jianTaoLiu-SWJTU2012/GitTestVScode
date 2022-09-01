/**
 * @file main.cpp
 * @author Jiantao Liu (Jiantaoliu1982@home.swjtu.edu.cn)
 * @brief This is the test function of the Swap function
 * @version 1
 * @date 2022-08-23; By Jiantao
 * 
 * @copyright Copyright (c) 2022  111
 * 
 */

#include <iostream>
#include <cmath>
#include "swap.h"
using namespace std;

/**
 * @brief The distance between two points P1(x1,y1)-P1(x2,y2)
 * 
 * @param x1: x coordinate of P1 for \f$x_1\f$
 * @param y1: y coordinate of P1
 * @param x2: x coordinate of P2
 * @param y2: y coordinate of P2 
 * @return int: The distance of the two points 
 */
double distance(double x1, double y1, double x2, double y2){
    return sqrt((x1 - x2) * (x1 - x2) +(y1 - y2)*(y1 - y2) );
}

int main()
{
    int val1 = 10;
    int val2 = 20;
    cout << "Before swap: " << endl;
    cout << "val1 = " << val1 << endl;
    cout << "val2 = " << val2 << endl;

    swap(val1,val2);
    cout << "After swap: " << endl;
    cout << "val1 = " << val1 << endl;
    // cout << "val2 = " << val2 << endl;
    return 0;
}