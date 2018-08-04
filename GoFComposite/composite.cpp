#include "composite.h"

void Composite::operation() {
	for (Component& item : list_) {
		item.operation();
	}

}