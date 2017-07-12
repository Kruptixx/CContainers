#include "queue.hpp"

Queue::Queue() {
    size = 0;
    head = nullptr;
    last = nullptr;
}

Queue::~Queue() {
    for(int i = 0; i < size; ++i)
        pop();
}

void Queue::push(int num) {
    if(last == nullptr) {
        head = new ListItem;
        head->n = num;
        head->p = nullptr;
        last = head;
    } else {
        ListItem* tmp = new ListItem;
        last->p = tmp;
        tmp->n = num;
        last = tmp;
    }
    ++size;
}

int Queue::pop() {
    if(head != nullptr) {
        ListItem tmp;
        tmp.p = head->p;
        tmp.n = head->n;
        delete head;
        head = tmp.p;
        --size;
        return tmp.n;
    }
    throw 6; // new QueueImplementedException
}
