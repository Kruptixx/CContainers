#pragma once
#include <stdexcept>

template <typename T>
class List {
protected:
    struct ListItem {
        T item;
        ListItem* p_prevItem;
    };

    ListItem* head;
    unsigned int size;
public:
    class EmptyListException : public std::runtime_error {
    public:
        EmptyListException() :
            std::runtime_error("Empty list item access") {}

        virtual const char* what() const noexcept {
            return "List inheritor object is empty. Trying to access item of empty list.";
        }
    };

    virtual T pop() = 0;
    virtual void push(T) noexcept = 0;
};
