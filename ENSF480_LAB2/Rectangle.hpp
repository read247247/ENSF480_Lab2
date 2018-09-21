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
	double side_b;
	Rectangle();
public:
	double area();
	double perimeter();
	//void get();

	void display();
};

/*
class, in addition to its constructor (no default constructor), should support the following functions:
- area – that calculates and returns the area of a rectangle
- perimeter – that calculates and returns the perimeter of a rectangle
- get and set – that retrieves or changes the values of its private data members.
- display – that displays the name, and x and y coordinate origin of the shape, side_a, side_b, area,
and perimeter of a rectangle object, in the following format:
Rectangle Name:
X-coordinate:
Y-coordinate:
Side a:
Side b:
 Area:
 Perimeter;

- More Functions, if needed.
*/



#endif /* Rectangle_hpp */
