// circle.h

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
public:
    Circle(double r);
    void setRadius(double r);
    double getRadius() const;
    double area() const;
    double circumference() const;
private:
    double radius{0.0};
};

#endif // CIRCLE_H
