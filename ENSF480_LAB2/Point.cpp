//
//  Point.cpp
//  ENSF480_LAB2
//
//  Created by Nathan Godard on 2018-09-21.
//  Copyright © 2018 Nathan Godard. All rights reserved.
//

#include <iomanip>
#include <iostream>
#include <cmath>
#include "Point.hpp"

using namespace std;
Point::Point(float x, float y){
    this -> id = static_id++;
    this ->x = x;
    this ->y = y;
}

Point::Point(const Point& p){
    
}

Point& Point::operator=(const Point& rhs){
    if(this != &rhs){
        destroy();
        copy(rhs);
    }
    return *this;
}

Point::~Point(){
    this -> destroy();
}

void Point::destroy(){
    delete this;
}

Point& Point::copy(const Point& rhs){
    this -> x = rhs.getx();
    this -> y = rhs.gety();
    this -> id = static_id++;
    return *this;
}

double Point::getx() const{
    return this -> x;
}
double Point::gety() const{
    return this -> y;
}
double Point::getid() const{
    return this -> id;
}
void Point::setx(double x){
    this -> x = x;
}
void Point::sety(double y){
    this -> y = y;
}

int Point::static_id = 1001;

float Point::distance(const Point& other) const{
    double x_dist = this -> x - other.x;
    double y_dist = this -> y - other.y;
    return sqrt( (x_dist * x_dist) + (y_dist *  y_dist) );
}

float Point::distance(const Point& p1, const Point& p2) {
    return p1.distance(p2);
}

void Point::display(){
    cout << "Point id: " << id << ":  ";
    cout << setprecision(2) << fixed;
    cout << "X-Coordinate: ";
    cout << setfill('0') << setw(9) << x;
    cout << "\n";

    cout << "Y-Coordinate: ";
    cout << setfill('0') << setw(9) << y << "\n";
}

int Point::counter(){
    return static_id - 1001;
}
