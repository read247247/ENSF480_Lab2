//
//  Point.hpp
//  ENSF480_LAB2
//
//  Created by Nathan Godard on 2018-09-21.
//  Copyright © 2018 Nathan Godard. All rights reserved.
//

#ifndef Point_hpp
#define Point_hpp

class Point {
public:
    float x;
    float y;
    static int id;
    
    void display();
    Point(float x, float y);
};

#endif /* Point_hpp */
