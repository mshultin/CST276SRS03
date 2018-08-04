#pragma once
#include "abstractdrawing.h"

class ConcreteDrawing : public AbstractDrawing {
private:
    void doOperation() override;
};