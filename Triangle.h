//
// Created by Rodrigo González de la Garza on 24/11/23.
//

#ifndef UNTITLED3_TRIANGLE_H
#define UNTITLED3_TRIANGLE_H

#include <stdio.h>
#include "Point.h"

class triangle {
private:
    point v1, v2, v3;

public:
    triangle();
    triangle(point _v1, point _v2, point _v3);
    point getv1();
    point getv2();
    point getv3();

    void setv1(point _v1);
    void setv2(point _v2);
    void setv3(point _v3);

    double perimetro();
    double area();
    std::string str();
};


#endif /* Triangle_hpp */
