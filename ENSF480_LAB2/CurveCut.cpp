//
//  CurveCut.cpp
//  ENSF480_LAB2
//
//  Created by Nathan Godard on 2018-09-21.
//  Copyright © 2018 Nathan Godard. All rights reserved.
//

#include "CurveCut.hpp"
#define PIE 3.1415927
#include <assert.h>

CurveCut::CurveCut(double x, double y, double width, double length, double radius, char* curveShapeName)
:Shape(Point(x, y), curveShapeName),
Circle(x, y, radius, curveShapeName),
Rectangle(x, y, width, length, curveShapeName){
	assert(radius <= width);
	assert(radius <= length);
	
}

double CurveCut::area() {
	double rectArea = side_a * side_b;
	double circleArea = (PIE * radius * radius)/4;
	return rectArea - circleArea;
}
double CurveCut::perimeter() {
	double rectPerim = 2 * side_a + 2 * side_b;
	double circlePerim = (2 * PIE * radius)/4;
	double count = rectPerim - radius * 2 + circlePerim;
	return count;
}
void CurveCut::display() {
    cout << "CurveCut Name:" << shapeName << "\n";
    origin.display();
    cout << "Width: " << side_a << "\n";
	cout << "Length: " << side_b << "\n";
	cout << "Radius: " << radius << "\n";

}