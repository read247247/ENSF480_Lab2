//
//  Circle.hpp
//  ENSF480_LAB2
//
//  Nathan Godard and Jathniel Ong
//
//  September 22, 2018

#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>
#include "Shape.hpp"

class Circle : virtual public Shape {
protected:
	double radius;

public:
	Circle(double x, double y, double rad, char* circle_name);

	virtual double area() const;
    //PROMISES: Returns the area of the Circle
    
	virtual double perimeter() const;
    //PROMISES: Returns the perimeter of the Circle
    
    //GETTERS AND SETTERS: As expected, nothing fancy
	double get_radius() const;
	void set_radius(double rad);
    //END GETTERS AND SETTERS
    
	virtual void display() const;
    //PROMISES: Displays the circle parameters via cout in the following format:
    //CurveCut Name:
    //X-Coordinate:
    //Y-Coordinate:
    //Width:
    //Length:
    //Radius:
};

#endif /* Circle_hpp */
