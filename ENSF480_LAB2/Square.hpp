//
//  Square.hpp
//  ENSF480_LAB2
//
//  Created by Nathan Godard on 2018-09-21.
//  Copyright © 2018 Nathan Godard. All rights reserved.
//

#ifndef Square_hpp
#define Square_hpp
#include "Shape.hpp"

class Square: virtual public Shape {
protected:
	double side_a;

public:
    Square(double x, double y, double side_length, char* shapeName): Shape(Point(x,y), shapeName), side_a(side_length){}
    ~Square();
    
    virtual double area();
    //REQUIRES: this has non-negative and non-garbage side_a value
    //PROMISES: Returns the area of the square
    
    virtual double perimeter();
    //REQUIRES: this has non-negative and non-garbage side_a value
    //PROMISES: Returns the area of the square
    
    virtual void display();
    //REQUIRES: All data members exist and are appropriate (side_a >= 0, etc)
    //PROMISES: Displays data via cout using the folloiwng format:
    /*Square Name:
     X-coordinate:
     Y-coordinate:
     Side a:
     Area:
     Perimeter;
     */
};

#endif /* Square_hpp */
