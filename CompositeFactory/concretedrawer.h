#pragma once
#include "abstractdrawer.h"
#include "concretedrawing.h"

class ConcreteDrawer : public AbstractDrawer {
private:
    ConcreteDrawing * doCreate() override;
};