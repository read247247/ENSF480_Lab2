//
//  Shape.cpp
//  ENSF480_LAB2
//
//  Nathan Godard and Jathniel Ong
//
//  September 22, 2018

#include <assert.h>
#include <iostream>
#include <stdlib.h>
#include "Shape.hpp"
#include "Point.hpp"

using namespace std;

Shape::Shape(const Point& origin, char * s) :origin(origin) {
	shapeName = new char[strlen(s) + 1];
	strcpy(this->shapeName, s);
}

Shape::~Shape() {delete[] shapeName;}

Shape::Shape(const Shape& source) :origin(source.origin), shapeName(new char[strlen(source.shapeName) + 1]) {
	if (shapeName == NULL) {
		cerr << "Memory not available...";
		exit(1);
	}
	strcpy(shapeName, source.shapeName);
}

Shape& Shape::operator=(const Shape& rhs) {
	if (this == &rhs)
		return *this;
	delete[] shapeName;
	shapeName = new char[strlen(rhs.shapeName) + 1];
	if (shapeName == NULL) {
		cerr << "Memory not available...";
		exit(1);
	}
	strcpy(shapeName, rhs.shapeName);
	origin = rhs.origin;
	return *this;
}

const Point& Shape::getOrigin()const {return this->origin;}

const char* Shape::getName() const{return this->shapeName;}

void Shape::display() const{
	cout << endl;
	cout << "Shape Name: " << this->shapeName << endl;
	cout << "X-coordinate: " << this->origin.getx() << endl;
	cout << "Y-coordinate: " << this->origin.gety() << endl;
}

double Shape::distance(Shape& other) {
	return this->origin.distance(other.getOrigin());
}

static double distance(Shape& the_shape, Shape& other) {
	return the_shape.distance(other);
}

void Shape::move(double dx, double dy) {
	this->origin.setx(dx);
	this->origin.sety(dy);

}

double Shape::area() {return 0;}

double Shape::perimeter() {return 0;}

