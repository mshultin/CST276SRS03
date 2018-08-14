#include "shapefactory.h"
#include "line.h"

//const std::vector<std::pair<Line::xPoint, Line::yPoint>> Line::getPoints() const {
//    return points_;
//}

void Line::addPoint(xPoint aX, yPoint aY) {
    std::pair<xPoint, yPoint> m_point{ aX, aY };
    if (points_.size() < maxPoints) {
        points_.emplace_back(m_point);
    }
    assert(points_.size() <= maxPoints);
}

void Line::store(std::ostream& ost) {
    JSON json;
}

void Line::load(std::istream& ist) {
    addPoint(1, 2);
    addPoint(2, 1);
}

void Line::draw() {
    std::cout << "Line at: ";
    for (std::pair<xPoint, yPoint> p : points_) {
        std::cout << "(" << p.first << "," << p.second << ") ";
    }
    std::cout << std::endl << std::endl;
}

// Implementation module for class Line
// Create an anonymous namespace
// to make the function invisible from other modules
namespace {
    Shape* createLine() {
        return new Line;
    }

    const bool& registered = ShapeFactory::getInstance().registerShape(Line::shapeID, createLine);
}