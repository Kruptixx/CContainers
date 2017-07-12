#pragma once

template <typename T>
class List {
protected:
    struct ListItem {
    	T n;
    	ListItem* p;
    };

	ListItem* head;
    unsigned int size;
public:
	virtual T pop() = 0;
	virtual void push(T) = 0;
};
