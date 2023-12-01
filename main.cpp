#include <iostream>
#include "Triangle.h"
#include "Point.h"
using namespace std;



int main() {
    double x1,x2,x3,y1,y2,y3;
    x1=0;
    y1=0;
    x2=50;
    y2=30;
    x3=25;
    y3=10;
    point pto1;
    point pto2;
    point pto3;

pto1.setx(x1);
pto1.sety(y1);
    cout << "Coordenadas de vertices: " << "\n";
cout << pto1.str() << "\n";

triangle v1;
v1.setv1(pto1);

pto2.setx(x2);
pto2.sety(y2);
triangle v2;
v2.setv2(pto2);

cout << pto2.str() << "\n";

pto3.setx(x3);
pto3.sety(y3);
triangle v3;
v3.setv3(pto3);
cout << pto3.str() << "\n";

triangle puntos1;

puntos1.perimetro();
puntos1.area();
cout << "perimetro: " << puntos1.perimetro() << "\n";
cout << "area: " << puntos1.area() << "\n";
;
    return 0;
}
