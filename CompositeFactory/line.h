#pragma once

#include "shape.h"
#include "point.h"

class Line : public Shape {
public:
    Line() : maxPoints{ 2 } {};
    Line(Point, Point);
    const std::vector<std::reference_wrapper<Point>> getPoints() const;
    void addPoint(Point);
    void store(std::ostream& ost) override;
    void load(std::istream& ist) override;
    void draw() override;
private:
    int maxPoints;
    std::vector<std::reference_wrapper<Point>> points_;
};