#pragma once

#include "shape.h"
#include "point.h"

class Circle : public Shape {
public:
    using centerX = int;
    using centerY = int;
    using radius = int;

    Circle(centerX x, centerY y, radius r) : x_{ x }, y_{ y }, r_{ r } {};
    void store(std::ostream& ost) override;
    void load(std::istream& ist) override;
    void draw() override;
private:
    centerX x_;
    centerY y_;
    radius r_;
};