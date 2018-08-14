#pragma once

#include <iostream>
#include "shape.h"
#include "shapefactory.h"

class Line : public Shape {
public:
    static const int shapeID = 0;
    using xPoint = int;
    using yPoint = int;

    Line() : maxPoints{ 2 } {};
    //const std::vector<std::pair<xPoint, yPoint>> getPoints() const;

    void store(std::ostream&) override;
    void load(std::istream&) override;
    void draw() override;
private:
    unsigned maxPoints;
    std::vector<std::pair<xPoint, yPoint>> points_;

    void addPoint(xPoint, yPoint);
};