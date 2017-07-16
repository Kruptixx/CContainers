#include "queue.hpp"

Queue::Queue() {
    size = 0;
    head = nullptr;
    tail = nullptr;
}

Queue::~Queue() {
    for(int i = 0; i < size; ++i)
        pop();
}

void Queue::push(int num) noexcept {
    if(tail == nullptr) {
        head = new ListItem;
        head->item = num;
        head->p_prevItem = nullptr;
        tail = head;
    } else {
        ListItem* tmp = new ListItem;
        tail->p_prevItem = tmp;
        tmp->item = num;
        tail = tmp;
    }
    ++size;
}

int Queue::pop() {
    if(head != nullptr) {
        ListItem tmp;
        tmp.p_prevItem = head->p_prevItem;
        tmp.item = head->item;
        delete head;
        head = tmp.p_prevItem;
        --size;
        return tmp.item;
    }
    throw EmptyListException();
}
