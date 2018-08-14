#pragma once

#include <vector>
#include "component.h"

class Composite : public Component {
public:
	void operation() override;
    void addComponent(Component&);
private:
	std::vector<std::reference_wrapper<Component>> list_{};
};