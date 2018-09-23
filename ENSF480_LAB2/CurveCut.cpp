//
//  CurveCut.cpp
//  ENSF480_LAB2
//
//  Nathan Godard and Jathniel Ong
//
// September 22, 2018

#include "CurveCut.hpp"
#define PIE 3.1415927
#include <assert.h>

CurveCut::CurveCut(double x, double y, double width, double length, double radius, char* curveShapeName)
	:Shape(Point(x, y), curveShapeName),
	Circle(x, y, radius, curveShapeName),
	Rectangle(x, y, width, length, curveShapeName)
{
	assert(radius <= width);
	assert(radius <= length);
}

double CurveCut::area() const{
	double rectArea = side_a * side_b;
	double circleArea = (PIE * radius * radius) / 4;
	return rectArea - circleArea;
}

double CurveCut::perimeter() const{
	double rectPerim = 2 * side_a + 2 * side_b;
	double circlePerim = (2 * PIE * radius) / 4;
	double totalPerim = rectPerim - radius * 2 + circlePerim;
	return totalPerim;
}

void CurveCut::display() const{
	cout << endl;
	cout << "CurveCut Name:" << shapeName << endl;
	origin.display();
	cout << "Width: " << side_a << endl;
	cout << "Length: " << side_b << endl;
	cout << "Radius: " << radius << endl;
}
