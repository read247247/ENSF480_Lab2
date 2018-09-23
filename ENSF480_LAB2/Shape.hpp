//
//  Shape.hpp
//  ENSF480_LAB2
//
//  Nathan Godard and Jathniel Ong
//
//  September 22, 2018

#ifndef Shape_hpp
#define Shape_hpp

#include <iostream>
#include "Point.hpp"

using namespace std;

class Shape{
public:
	Shape(const Point& origin, char * shapeName);
	Shape(const Shape& source);
	virtual ~Shape();
    Shape& operator=(const Shape& rhs);
    
	const Point& getOrigin()const;
    //PROMISES: Returns reference to the centre point of the shape
    
	const char* getName() const;
    //PROMISES: Returns name of the shape as a C-string
    
	virtual void display() const;
    //PROMISES: Displays the characteristics of the circle in the following format:
    //Shape Name:
    //X-coordinate:
    //Y-coordinate:
    
	double distance(Shape& other);
    //REQUIRES: other to have a valid centre point
    //PROMISES: Returns the distance betweeen the centres of this and other
    
	void move(double dx, double dy);
    //PROMISES: Moves the x value of the shape by dx, and the y value by dy
    
	static double distance(Shape& the_shape, Shape& other);
    //REQUIRES: the_shape and other have valid centre points
    //PROMISES: Returns the distance between the centre points of the two shapes
    
	virtual double area();
    //PROMISES: Returns the area of the shape
    
	virtual double perimeter();
    //PROMISES: Returns the perimeter of the shape

protected:
	Point origin;   //The centre point of the shape
	char * shapeName;   //Name of the shape
};

#endif /* Shape_hpp */
