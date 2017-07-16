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
        arr[i] = tmp->item;
        tmp = tmp->p_prevItem;
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
            arr[i] = tmp->item;
            tmp = tmp->p_prevItem;
        }
        size = 0;
        for(int i = 0; i < copy.size; ++i)
            push(arr[i]);
    }
    return *this;
}

void Stack::push(int num) noexcept {
    if(head == nullptr) {
        head = new ListItem;
        head->item = num;
        head->p_prevItem = nullptr;
    } else {
        ListItem* tmp = new ListItem;
        tmp->p_prevItem = head;
        tmp->item = num;
        head = tmp;
    }
    ++size;
}

int Stack::pop() {
    if(head != nullptr) { // or size != 0
        ListItem tmp;
        tmp.p_prevItem = head->p_prevItem;
        tmp.item = head->item;
        delete head;
        head = tmp.p_prevItem;
        --size;
        return tmp.item;
    }
    throw EmptyListException(); // new StackImplementedException
}
