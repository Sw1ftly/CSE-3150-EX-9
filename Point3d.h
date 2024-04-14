#ifndef POINT3D_H
#define POINT3D_H

#include <iostream>
#include <cmath>

class Point3d {
private:
    double x, y, z;

public:
    Point3d() : x(0), y(0), z(0) {}
    Point3d(double x, double y, double z) : x(x), y(y), z(z) {}
    Point3d(const Point3d& p3d) : x(p3d.x), y(p3d.y), z(p3d.z) {}
    ~Point3d() {}

    double get_x() const { return x; }
    double get_y() const { return y; }
    double get_z() const { return z; }

    void set_x(double xVal) { x = xVal; }
    void set_y(double yVal) { y = yVal; }
    void set_z(double zVal) { z = zVal; }

    friend std::ostream& operator<<(std::ostream& os, const Point3d& point);
};

std::ostream& operator<<(std::ostream& os, const Point3d& point) {
    os << "(" << point.x << ", " << point.y << ", " << point.z << ")";
    return os;
}

#endif