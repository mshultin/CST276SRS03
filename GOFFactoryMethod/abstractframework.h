#pragma once
#include "abstractproduct.h"

class AbstractFramework {
public:
	void operation();
private:
	virtual AbstractProduct* doCreate() = 0;
};