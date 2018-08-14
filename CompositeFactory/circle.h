#pragma once

#include <iostream>
#include "shape.h"
#include "shapefactory.h"

class Circle : public Shape {
public:
    static const int shapeID = 1;
    using centerX = int;
    using centerY = int;
    using radius = int;
    
    Circle() : x_{ 2 }, y_{ 3 }, r_{ 4 } {};
    void store(std::ostream& ost) override;
    void load(std::istream& ist) override;
    void draw() override;
private:
    centerX x_;
    centerY y_;
    radius r_;
};