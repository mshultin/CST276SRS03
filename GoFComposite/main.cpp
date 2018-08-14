// GoF Composite
#include "component.h"
#include "leaf0.h"
#include "leaf1.h"
#include "leaf2.h"
#include "leafn.h"
#include "composite.h"

int main() {
    Composite composite;
    Leaf0 leaf0;
    Leaf1 leaf1;
    Leaf2 leaf2;
    LeafN leafN;
    composite.addComponent(leaf0);
    composite.addComponent(leaf1);
    composite.addComponent(leaf2);
    composite.addComponent(leafN);
    composite.operation();

	return 0;
}