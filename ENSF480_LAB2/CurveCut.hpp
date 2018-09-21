//
//  CurveCut.hpp
//  ENSF480_LAB2
//
//  Created by Nathan Godard on 2018-09-21.
//  Copyright © 2018 Nathan Godard. All rights reserved.
//

#ifndef CurveCut_hpp
#define CurveCut_hpp

#include <stdio.h>
#include "Rectangle.hpp"
#include "Circle.hpp"

class CurveCut : public Rectangle, public Circle {
    CurveCut(double x, double y, double width, double length, double radius, char* curveShapeName);
    
    double area();
    double perimeter();
    void display();
};

#endif /* CurveCut_hpp */
