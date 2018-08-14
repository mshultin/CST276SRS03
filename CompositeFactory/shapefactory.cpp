#include "shapefactory.h"
#include "shape.h"

Shape* ShapeFactory::createShape(fakeGUID aGUID) {
    CallBackMap::const_iterator itr = AbstractFactory::shapeList_.find(aGUID);
    if (itr == AbstractFactory::shapeList_.end()) {
        throw std::runtime_error("Unknown Shape ID");
    }

    return (itr->second());
}