//
//  Rectangle.hpp
//  ENSF480_LAB2
//
//  Created by Nathan Godard on 2018-09-21.
//  Copyright © 2018 Nathan Godard. All rights reserved.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp
#include "Square.hpp"


class Rectangle : public Square {
protected:
	double side_b;
public:
	Rectangle(double x, double y, double side_a, double side_b, char* shapeName) : Square(x, y, side_a, shapeName), side_b(side_b) {};
    void set_side_a(double input);
    void set_side_b(double input);
    
	double area();
	double perimeter();
	void display();
	
};

#endif /* Rectangle_hpp */
