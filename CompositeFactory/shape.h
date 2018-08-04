#pragma once

#include <cassert>
#include <iostream>
#include <vector>

class Point;

class Shape {
public:
    virtual void store(std::ostream&) = 0;
    virtual void load(std::istream&) = 0;
    virtual void draw() = 0;
};