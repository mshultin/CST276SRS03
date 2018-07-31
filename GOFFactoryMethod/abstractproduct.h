#pragma once

class AbstractProduct {
public:
	void operation();
private:
	virtual void doOperation() = 0;
};