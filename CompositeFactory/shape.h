#pragma once

#include <cassert>
#include <iostream>
#include <utility>
#include <vector>
#include <nlohmann/json.hpp>

class Shape {
public:
    using JSON = nlohmann::json;

    virtual void draw() = 0;
    virtual void store(std::ostream&) = 0;
    virtual void load(std::istream&) = 0;
};