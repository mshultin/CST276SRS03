#pragma once
#include "abstractframework.h"
#include "concreteproduct.h"

class ConcreteFramework : public AbstractFramework {
private:
	ConcreteProduct* doCreate() override;
};