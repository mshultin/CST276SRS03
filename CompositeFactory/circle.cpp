#include "circle.h"

void Circle::store(std::ostream& ost) {

}

void Circle::load(std::istream& ist) {
    
}

void Circle::draw() {
    std::cout << "Circle center at (" << x_ << "," << y_ << "), radius: " << r_ << std::endl << std::endl;
}

// Implementation module for class Line
// Create an anonymous namespace
// to make the function invisible from other modules
namespace {
    Shape* createCircle() {
        return new Circle;
    }

    const bool& registered = ShapeFactory::getInstance().registerShape(Circle::shapeID, createCircle);
}