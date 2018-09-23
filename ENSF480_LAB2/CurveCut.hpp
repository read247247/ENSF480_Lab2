//
//  CurveCut.hpp
//  ENSF480_LAB2
//
//  Nathan Godard and Jathniel Ong
//
//  September 22, 2018

#ifndef CurveCut_hpp
#define CurveCut_hpp

#include <stdio.h>
#include "Rectangle.hpp"
#include "Circle.hpp"

class CurveCut : public Rectangle, public Circle {
public:
	CurveCut(double x, double y, double width, double length, double radius, char* curveShapeName);

	double area() const;
    //PROMISES: Returns the area of the Circle
    
	double perimeter() const;
    //PROMISES: Returns the perimeter of the Circle
    
	void display() const;
    //PROMISES: Displays the Curvecut parameters via cout in the following format:
    //CurveCut Name:
    //X-Coordinate:
    //Y-Coordinate:
    //Width:
    //Length:
    //Radius:
};

#endif /* CurveCut_hpp */
