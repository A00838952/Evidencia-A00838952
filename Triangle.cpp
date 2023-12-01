//
// Created by Rodrigo González de la Garza on 24/11/23.
//

#include "Triangle.h"

triangle:: triangle(){
    v1= point(0, 0);
    v2= point(50, 30);
    v3= point(25, 10);
}

triangle::triangle(point _v1, point _v2, point _v3){
    v1= _v1;
    v2= _v2;
    v3= _v3;
}

point triangle::getv1(){
    return v1;
}

point triangle::getv2(){
    return v2;
}

point triangle::getv3(){
    return v3;
}

void triangle::setv1(point _v1){
    v1= _v1;
}

void triangle::setv2(point _v2){
    v2=_v2;
}

void triangle::setv3(point _v3){
    v3= _v3;
}

double triangle::perimetro(){
    return v2.calcdist(v1)+ v3.calcdist(v2)+ v1.calcdist(v3);
}

double triangle::area( ){
    return 1.0/2 * abs(((v1.getx()* v2.gety())+ (v2.getx()* v3.gety())+ (v3.getx()*v1.gety()) ) - ((v1.getx()*v3.gety())+(v3.getx()*v2.gety())+ (v2.getx()*v1.gety())));
}
std::string triangle::str( ){
    return v1.str() + ',' + v2.str() + ',' + v3.str();
}