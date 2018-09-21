//
//  main.cpp
//  ENSF480_LAB2
//
//  Created by Nathan Godard on 2018-09-21.
//  Copyright © 2018 Nathan Godard. All rights reserved.
//

#include <iostream>
#include "Point.hpp"

int main(int argc, const char * argv[]) {
    Point* testPoint = new Point(50, 2);
    Point* testPoint2 = new Point(51, 3);
    testPoint -> display();
    testPoint2 -> display();
    return 0;
}
