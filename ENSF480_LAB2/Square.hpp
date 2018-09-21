//
//  Square.hpp
//  ENSF480_LAB2
//
//  Created by Nathan Godard on 2018-09-21.
//  Copyright © 2018 Nathan Godard. All rights reserved.
//

#ifndef Square_hpp
#define Square_hpp

class Square: public Shape {
    double side_a;
    
    Square(Point origin, char* shapeName, double side_length): Shape(origin, shapeName), side_a(side_length){}
    
    double area();
    double perimeter();
    void display();
};

#endif /* Square_hpp */
