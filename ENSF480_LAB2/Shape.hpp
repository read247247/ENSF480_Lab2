//
//  Shape.hpp
//  ENSF480_LAB2
//
//  Created by Nathan Godard on 2018-09-21.
//  Copyright © 2018 Nathan Godard. All rights reserved.
//
//
#ifndef Shape_hpp
#define Shape_hpp
#include <iostream>
using namespace std;

#include "Point.hpp"

class Shape{
public:
	Shape(Point origin, char * shapeName);
	Shape(const Shape& source);
	~Shape();
	Shape& Shape::operator=(const Shape& rhs);
	const Point& getOrigin()const;
	const char* getName();
	void display();
	double distance(Shape& other);
	void move(double dx, double dy);
	static double distance(Shape& the_shape, Shape& other);

private:
	Point origin;
	char * shapeName;
};


#endif /* Shape_hpp */
