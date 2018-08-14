// Singleton - Besser Sintleton
#pragma once
#include "abstractfactory.h"
#include "shape.h"

class ShapeFactory final : public AbstractFactory {
private:
    ShapeFactory() = default;
public:
    Shape* createShape(fakeGUID) override;
    static ShapeFactory& getInstance() {
        static ShapeFactory instance_;
        return instance_;
    }
    //~ShapeFactory() = default;
};