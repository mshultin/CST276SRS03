// GoF Factory Method (Page: 108); Professor Besser's implementation

#include "abstractframework.h"

void AbstractFramework::operation(){
	AbstractProduct* abstractProduct{ doCreate() };
	abstractProduct->operation();
}