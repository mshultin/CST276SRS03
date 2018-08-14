#include "composite.h"

void Composite::addComponent(Component& aComponent) {
    list_.emplace_back(aComponent);
}

void Composite::operation() {
	for (Component& item : list_) {
		item.operation();
	}

}