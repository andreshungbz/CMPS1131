// Point Class Header (Point.h)

#ifndef POINT_CLASS_POINT_H
#define POINT_CLASS_POINT_H

#include <iostream>

class Point {
public:
    explicit Point(int x = 0, int y = 0);
    void setX(int x);
    [[nodiscard]] int getX() const;
    void setY(int y);
    [[nodiscard]] int getY() const;
    void moveRight(int x);
    void moveUp(int y);
    void display() const;
private:
    int xcoordinate;
    int ycoordinate;
};

#endif // POINT_CLASS_POINT_H
