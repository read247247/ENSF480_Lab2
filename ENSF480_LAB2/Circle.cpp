//
//  Circle.cpp
//  ENSF480_LAB2
//
//  Created by Nathan Godard on 2018-09-21.
//  Copyright © 2018 Nathan Godard. All rights reserved.
//

#include "Circle.hpp"

Circle::Circle(double x, double y, double rad, char* circle_name): Shape(Point(x, y), circle_name){
    radius = rad;
};
