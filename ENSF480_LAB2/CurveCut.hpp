//
//  CurveCut.hpp
//  ENSF480_LAB2
//
//  Nathan Godard and Jathniel Ong
//

#ifndef CurveCut_hpp
#define CurveCut_hpp

#include <stdio.h>
#include "Rectangle.hpp"
#include "Circle.hpp"

class CurveCut : public Rectangle, public Circle {
public:
	CurveCut(double x, double y, double width, double length, double radius, char* curveShapeName);

	double area();
	double perimeter();
	void display();
};

#endif /* CurveCut_hpp */
