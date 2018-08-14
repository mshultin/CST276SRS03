#pragma once

#include "shapefactory.h"
#include <nlohmann/json.hpp>

class Drawing {
public:
    using JSON = nlohmann::json;

    void open();
    void close();
};