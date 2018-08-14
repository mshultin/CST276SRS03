#include "abstractfactory.h"
#include "line.h"
#include "circle.h"

bool AbstractFactory::registerShape(AbstractFactory::fakeGUID aGUID, AbstractFactory::CreateShapeCallBack aShape) {
    return shapeList_.insert(CallBackMap::value_type(aGUID, aShape)).second;
}

bool AbstractFactory::unregisterShape(AbstractFactory::fakeGUID aGUID) {
    return shapeList_.erase(aGUID) == 1;
}