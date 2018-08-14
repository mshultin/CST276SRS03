// GoF Factory Method (Page )
// Modern C++ Design - Chapter 8 Factory Method (Page 172)
#pragma once

#include <iostream>
#include <map>
#include "shape.h"

class AbstractFactory {
public:
    using fakeGUID = int;
    typedef Shape* (*CreateShapeCallBack)();

private:
    typedef std::map<fakeGUID, CreateShapeCallBack> CallBackMap;

public:
    bool registerShape(fakeGUID, CreateShapeCallBack);
    bool unregisterShape(fakeGUID);
    virtual Shape* createShape(fakeGUID) = 0;

protected:
    CallBackMap shapeList_;
};