//
//  Square.cpp
//  ENSF480_LAB2
//
//  Created by Nathan Godard on 2018-09-21.
//  Copyright © 2018 Nathan Godard. All rights reserved.
//

#include <iostream>
#include "Square.hpp"

using namespace std;

double Square::area(){
    assert(side_a >=0);
    return side_a * side_a;
}

double Square::perimeter(){
    assert(side_a >=0);
    return side_a * 4;
}

void Square::display(){
    cout << "Square Name: ";
    cout << this -> shapeName << "\n";
    cout << this -> origin.display();
    cout << "Side a: ";
    cout << side_a << "\n";
    cout << "Area: ";
    cout << this -> area() << "\n";
    cout << "Perimeter: ";
    cout << this -> perimeter() << "\n";
}
