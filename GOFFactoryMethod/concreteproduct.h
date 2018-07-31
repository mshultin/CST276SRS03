#pragma once
#include "abstractproduct.h"

class ConcreteProduct : public AbstractProduct {
private:
	void doOperation() override;
};