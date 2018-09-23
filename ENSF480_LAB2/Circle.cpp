//
//  Circle.cpp
//  ENSF480_LAB2
//
//  Nathan Godard and Jathniel Ong
//
//  September 22, 2018

#include "Circle.hpp"
#define PIE 3.1415927

Circle::Circle(double x, double y, double rad, char* circle_name) : Shape(Point(x, y), circle_name) {radius = rad;}

double Circle::area() const{
	return (PIE * radius * radius);
}

double Circle::perimeter() const{
	return (2 * PIE * radius);
}

double Circle::get_radius() const{return radius;}

void Circle::set_radius(double rad) {radius = rad;}

void Circle::display() const{
	cout << endl;
	cout << "Circle Name:" << shapeName << endl;
	origin.display();
	cout << "Radius: " << radius << endl;
}
