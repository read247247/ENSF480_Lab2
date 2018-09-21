//
//  Point.cpp
//  ENSF480_LAB2
//
//  Created by Nathan Godard on 2018-09-21.
//  Copyright © 2018 Nathan Godard. All rights reserved.
//

#include "Point.hpp"

#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;


Point::Point(float x, float y){
    this -> id = static_id++;
    this ->x = x;
    this ->y = y;
}

int Point::static_id = 1001;

float Point::distance(Point& other){
    double x_dist = this -> x - other.x;
    double y_dist = this -> y - other.y;
    return sqrt( (x_dist * x_dist) + (y_dist *  y_dist) );
}

float Point::distance(Point& p1, Point& p2){
    return p1.distance(p2);
}

void Point::display(){
    cout << "Point id: " << id << ":  ";
    cout << setprecision(2) << fixed;
    cout << "X-Coordinate: ";
    cout << setfill('0') << setw(9) << x;
    cout << "\n";

    cout << "Y-Coordinate: ";
    cout << setfill('0') << setw(9) << y << "\n";
}

int Point::counter(){
    return static_id - 1001;
}
