#include "concreteframework.h"

ConcreteProduct* ConcreteFramework::doCreate() {
	ConcreteProduct* product = new ConcreteProduct();
	return product;
}