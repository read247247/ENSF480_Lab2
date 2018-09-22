//
//  Rectangle.hpp
//  ENSF480_LAB2
//
//  Nathan Godard and Jathniel Ong
//

#ifndef Rectangle_hpp
#define Rectangle_hpp
#include "Square.hpp"


class Rectangle : public Square {
protected:
	double side_b;

public:
	Rectangle(double x, double y, double side_a, double side_b, char* shapeName):Shape(Point(x, y), shapeName), Square(x, y, side_a, shapeName), side_b(side_b) {};
    void set_side_a(double input);
    void set_side_b(double input);
	virtual double area();
    virtual double perimeter();
	virtual void display();
	
};

#endif /* Rectangle_hpp */
