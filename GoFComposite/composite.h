#pragma once

#include <vector>
#include "component.h"

class Composite : public Component {
public:
	void operation() override;
private:
	std::vector<std::reference_wrapper<Component>> list_{};
};