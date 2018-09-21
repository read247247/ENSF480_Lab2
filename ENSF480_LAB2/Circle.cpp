//
//  Circle.cpp
//  ENSF480_LAB2
//
//  Created by Nathan Godard on 2018-09-21.
//  Copyright © 2018 Nathan Godard. All rights reserved.
//

#include "Circle.hpp"
#define PIE 3.1415927

Circle::Circle(double x, double y, double rad, char* circle_name): Shape(Point(x, y), circle_name){
    radius = rad;
}
    
double Circle::area(){
    return (PIE * radius * radius);
}
double Circle::perimeter(){
    return (2 * PIE * radius);
}
double Circle::get_radius(){
    return radius;
}

void Circle::set_radius(double rad){
    radius = rad;
}

void Circle::display(){
    cout << "Circle Name:" << shapeName << "\n";
    origin.display();
    cout << "Radius: " << radius << "\n";
}
