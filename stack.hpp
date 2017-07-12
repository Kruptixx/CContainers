#pragma once
#include "list.hpp"

class Stack : public List<int> {
public:
	Stack();
    ~Stack();
    Stack(const Stack& copy);

    Stack& operator= (const Stack& copy);
    int pop();
    void push(int num);
};
