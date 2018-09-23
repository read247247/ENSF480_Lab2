//
//  Square.cpp
//  ENSF480_LAB2
//
//  Nathan Godard and Jathniel Ong
//
//  September 22, 2018

#include <iostream>
#include "Square.hpp"
#include <assert.h>

using namespace std;

Square::~Square() {}

double Square::area(){
    assert(side_a >=0);
    return side_a * side_a;
}

double Square::perimeter(){
    assert(side_a >=0);
    return side_a * 4;
}

void Square::display(){
	cout << endl;
    cout << "Square Name: " << this -> shapeName << endl;
    this -> origin.display();
    cout << "Side a: ";
    cout << side_a << endl;
    cout << "Area: ";
    cout << this -> area() << endl;
    cout << "Perimeter: ";
    cout << this -> perimeter() << endl;
}
