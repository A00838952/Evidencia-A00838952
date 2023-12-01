//
// Created by Rodrigo González de la Garza on 24/11/23.
//

#ifndef Punto_hpp
#define Punto_hpp

#include <stdio.h>
#include <string>
#include <math.h>

class point {
private:
    double x, y;

public:
    //constuctores
    point();
    point(double _x, double _y);

    //getters
    double getx();
    double gety();

    //setters
    void setx(double _x);
    void sety(double _y);

    //distancia
    double calcdist(point p2);
    std::string str();

};


#endif /* Punto_hpp */
