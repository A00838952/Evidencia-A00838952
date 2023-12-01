//
// Created by Rodrigo González de la Garza on 24/11/23.
//

#include "Point.h"

point::point(){
    x=0;
    y=0;
}

point::point(double _x, double _y){
    x= _x;
    y= _y;
}

double point::getx(){
    return x;
}
double point::gety(){
    return y;
}

void point::setx(double _x){
    x= _x;
}
void point::sety(double _y){
    y= _y;
}

double point::calcdist(point p2){
    return sqrt((p2.x - x)*(p2.x - x) + (p2.y - y)*(p2.y - y));
}
std::string point::str(){
    return '('+ std::to_string(x) + ',' + std::to_string(y) + ')';
}

