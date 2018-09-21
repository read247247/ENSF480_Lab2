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
private:
    double x;
    double y;
    static int static_id;
    int id;
    
public:
    Point(float x, float y);
    //PROMISES: Creates a new Point with values x, y
    
    void display();
    /*
    REQUIRES: this has non-garbage values for x, y
    PROMISES: cout's contents of point to cout in the following format:
    X-coordinate: ######.##
    Y-coordinate: ######.##
     */
    
    int counter();
    //PROMISES: cout's number of objects of type Point created since program began
    
    float static distance(Point& p1, Point& p2);
    //REQURES: p1 and p2 have non-gargage x and y values
    //PROMISES: Returns the distance between the two points
    
    float distance(Point& other);
    //REQUIRES: this and other have non-garbage values for x and y
    //PROMISES: returns distance between this and other
};

#endif /* Point_hpp */
