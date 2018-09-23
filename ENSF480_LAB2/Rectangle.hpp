//
//  Rectangle.hpp
//  ENSF480_LAB2
//
//  Nathan Godard and Jathniel Ong
//
//  September 22, 2018

#ifndef Rectangle_hpp
#define Rectangle_hpp
#include "Square.hpp"


class Rectangle : public Square {
protected:
	double side_b;

public:
	Rectangle(double x, double y, double side_a, double side_b, char* shapeName):Shape(Point(x, y), shapeName), Square(x, y, side_a, shapeName), side_b(side_b) {};
    
    //SETTERS: As expected, nothing fancy
    void set_side_a(double input);
    void set_side_b(double input);
    //END SETTERS
    
	virtual double area() const;
    //PROMISES: Returns the area of the rectangle
    
    virtual double perimeter() const;
    //PROMISES: Returns the perimeter of the rectangle
    
	virtual void display() const;
    //PROMISES: Displays the rectangle's properties via cout in the following format:
    //Rectangle Name:
    //X-Coordinate:
//    Y-Coordinate:
//    Side a:
//    Side b:
//    Area:
//    Perimeter:
};

#endif /* Rectangle_hpp */
