#pragma once
#include "abstractdrawing.h"

class AbstractDrawer {
public:
    void createDrawing();

private:
    virtual AbstractDrawing* doCreate() = 0;
};