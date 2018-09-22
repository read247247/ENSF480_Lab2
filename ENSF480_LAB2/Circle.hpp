//
//  Circle.hpp
//  ENSF480_LAB2
//
//  Nathan Godard and Jathniel Ong
//

#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>
#include "Shape.hpp"

class Circle : virtual public Shape {
protected:
	double radius;

public:
	Circle(double x, double y, double rad, char* circle_name);

	virtual double area();
	virtual double perimeter();
	double get_radius();
	void set_radius(double rad);
	virtual void display();
};

#endif /* Circle_hpp */
