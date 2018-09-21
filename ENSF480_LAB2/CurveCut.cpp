//
//  CurveCut.cpp
//  ENSF480_LAB2
//
//  Created by Nathan Godard on 2018-09-21.
//  Copyright © 2018 Nathan Godard. All rights reserved.
//

#include "CurveCut.hpp"

CurveCut::CurveCut(double x, double y, double width, double length, double radius, char* curveShapeName)
:Shape(Point(x, y), curveShapeName),
Circle(x, y, radius, curveShapeName),
Rectangle(x, y, width, length, curveShapeName)
{}
