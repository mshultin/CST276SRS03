

#include "abstractdrawer.h"

void AbstractDrawer::createDrawing() {
    AbstractDrawing* abstractDrawing{ doCreate() };
    abstractDrawing->operation();
}