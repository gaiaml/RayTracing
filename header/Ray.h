//
// Created by Home on 02/11/2018.
//

#ifndef RAYTRACING_RAY_H
#define RAYTRACING_RAY_H


#include "Vector.h"
#include "Point.h"

class Ray {
public:
    Point pSource;
    Vector<float> dir;

    Ray(const Point& o, const Vector<float>& dir);
    Point ray_position(float t);
    ~Ray() = default;

    inline friend std::ostream& operator<<(std::ostream& os, const Ray& r){
        os << "(Ray) : " << r.pSource << "," << r.dir;
        return os;
    }


};


#endif //RAYTRACING_RAY_H
