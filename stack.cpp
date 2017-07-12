#include "stack.hpp"

Stack::Stack() {
    size = 0;
    head = nullptr;
}

Stack::~Stack() {
    for(int i = 0; i < size; ++i)
        pop();
}

Stack::Stack(const Stack& copy) {
    for(int i = 0; i < size; ++i)
        pop();
    ListItem* tmp = copy.head;
    int arr[size];
    for(int i = copy.size - 1; i >= 0; --i) {
        arr[i] = tmp->n;
        tmp = tmp->p;
    }
    size = 0;
    for(int i = 0; i < copy.size; ++i)
        push(arr[i]);
}

Stack& Stack::operator= (const Stack& copy) {
    if(this != &copy) {
        if(head != nullptr)
            for(int i = 0; i < size; ++i)
                pop();
        ListItem* tmp = copy.head;
        int arr[size];
        for(int i = copy.size - 1; i >= 0; --i) {
            arr[i] = tmp->n;
            tmp = tmp->p;
        }
        size = 0;
        for(int i = 0; i < copy.size; ++i)
            push(arr[i]);
    }
    return *this;
}

void Stack::push(int num) {
    if(head == nullptr) {
        head = new ListItem;
        head->n = num;
        head->p = nullptr;
    } else {
        ListItem* tmp = new ListItem;
        tmp->p = head;
        tmp->n = num;
        head = tmp;
    }
    ++size;
}

int Stack::pop() {
    if(head != nullptr) {
        ListItem tmp;
        tmp.p = head->p;
        tmp.n = head->n;
        delete head;
        head = tmp.p;
        --size;
        return tmp.n;
    }
    throw 5; // new StackImplementedException
}
