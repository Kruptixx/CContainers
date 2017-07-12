#pragma once
#include "list.hpp"

class Queue : public List<int> {
private:
	ListItem* last;
public:
	Queue();
	~Queue();
    int pop();
    void push(int num);
};
