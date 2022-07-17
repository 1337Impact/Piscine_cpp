#include "Point.hpp"
#include <cmath>

float calculateArea(const float *a, float *b, float *c){
    float area;

    area = a[0] * (b[1] - c[1]) - b[0] * (a[1] - c[1]) + c[0] * (a[1] - b[1]);
    return abs(area / 2);
}



bool bsp( Point const a, Point const b, Point const c, Point const point){
    float fa[2] = {((Point)a).get_x().toFloat(), ((Point)a).get_y().toFloat()};
    float fb[2] = {((Point)b).get_x().toFloat(), ((Point)b).get_y().toFloat()};
    float fc[2] = {((Point)c).get_x().toFloat(), ((Point)c).get_y().toFloat()};
    float fpoint[2] = {((Point)point).get_x().toFloat(), ((Point)point).get_y().toFloat()};

    float rec1 = calculateArea(fa, fb, fpoint);
    float rec2 = calculateArea(fa, fc, fpoint);
    float rec3 = calculateArea(fb, fc, fpoint);
    float recta = calculateArea(fa, fb, fc);

    if ((rec1 + rec2 + rec3) == recta && rec1 && rec2 && rec3 ){
        return true;
    }
    else{
        return false;
    }
}