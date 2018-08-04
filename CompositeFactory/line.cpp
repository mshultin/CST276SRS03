#include "line.h"

Line::Line(Point point1, Point point2) {
    maxPoints = 2;
    points_.emplace_back(point1);
    points_.emplace_back(point2);
}

const std::vector<std::reference_wrapper<Point>> Line::getPoints() const {
    return points_;
}

void Line::addPoint(Point aPoint) {
    if (points_.size() < maxPoints) {
        points_.emplace_back(aPoint);
    }
    assert(points_.size() <= maxPoints);
}

void Line::store(std::ostream& ost) {

}

void Line::load(std::istream& ist) {

}

void Line::draw() {
    for (auto p : points_) {
        std::cout << p.get().getX() << std::endl;
        std::cout << p.get().getY() << std::endl;
    }
}