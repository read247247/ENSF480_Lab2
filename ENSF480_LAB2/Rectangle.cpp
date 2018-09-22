//
//  Rectangle.cpp
//  ENSF480_LAB2
//
//  Nathan Godard and Jathniel Ong
//

#include <iostream>
#include "Rectangle.hpp"
#include <assert.h>

using namespace std;

void Rectangle::set_side_a(double input) {
	side_a = input;
}
void Rectangle::set_side_b(double input) {
	side_b = input;
}

double Rectangle::area() {
	assert(side_a >= 0);
	assert(side_b >= 0);
	return side_a * side_b;
}

double Rectangle::perimeter() {
	assert(side_a >= 0);
	assert(side_b >= 0);
	return side_a * 2 + side_b * 2;
}

void Rectangle::display() {
	cout << endl;
	cout << "Rectangle Name: " << this->shapeName << endl;
	origin.display();
	cout << "Side a: " << side_a << endl;
	cout << "Side b: " << side_b << endl;
	cout << "Area: " << area() << endl;
	cout << "Perimeter: " << perimeter() << endl;
}
