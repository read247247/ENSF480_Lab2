//
//  Point.cpp
//  ENSF480_LAB2
//
//  Created by Nathan Godard on 2018-09-21.
//  Copyright © 2018 Nathan Godard. All rights reserved.
//

#include "Point.hpp"

#include <stdio.h>
#include <iomanip>
#include <iostream>

using namespace std;


Point::Point(float x, float y){
    this ->x = x;
    this ->y = y;
}

int Point::id = 1000;

void Point::display(){
    cout << setprecision(2) << fixed;
    cout << "X-Coordinate: ";
    cout << setfill('0') << setw(9) << x;
    cout << "\n";

    cout << "Y-Coordinate: ";
    cout << setfill('0') << setw(9) << y << "\n";
}
