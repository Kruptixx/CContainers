#pragma once
#include "list.hpp"

class Stack : public List<int> {
	Stack(Stack&&) = delete;
	Stack& operator= (Stack&&) = delete;
public:
	Stack();
    virtual ~Stack();
    Stack(const Stack&);

    Stack& operator= (const Stack&);
    int pop();
    void push(int) noexcept;
};
