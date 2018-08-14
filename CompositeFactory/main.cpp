#include <iostream>
#include "drawing.h"
#include "shapefactory.h"



int main() {
    auto factory{ ShapeFactory::getInstance() };
    auto line = factory.createShape(0);
    line->load(std::cin);
    line->draw();
    auto circle = factory.createShape(1);
    circle->load(std::cin);
    circle->draw();
    return 0;
}