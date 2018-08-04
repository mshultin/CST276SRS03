#pragma once

class AbstractDrawing {
public:
    void createCanvas();
private:
    virtual void doOperation() = 0;
};