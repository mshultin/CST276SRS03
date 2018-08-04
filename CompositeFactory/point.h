#pragma once

class Point {
public:
    using xCoord = int;
    using yCoord = int;
    
    Point(xCoord x, yCoord y) : x_{ x }, y_{ y } {};
    const auto getX() { return x_; };
    const auto getY() { return y_; };
    void setX(xCoord x);
    void setY(yCoord y);
private:
    int x_;
    int y_;
};