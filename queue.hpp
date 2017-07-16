#pragma once
#include "list.hpp"

class Queue : public List<int> {
private:
	ListItem* tail;

	Queue(const Queue&) = delete;
	Queue(Queue&&) = delete;
	Queue& operator= (const Queue&) = delete;
	Queue& operator= (Queue&&) = delete;
public:
	Queue();
	virtual ~Queue();

    int pop();
    void push(int) noexcept;
};
