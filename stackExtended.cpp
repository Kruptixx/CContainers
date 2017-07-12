#include "stackExtended.hpp"


int StackExtended::sum() const {
    int sum = 0;
    ListItem* tmp = head;
    if (size != 0)
        for(int i = 0; i < size; ++i) {
            sum += tmp->n;
            tmp = tmp->p;
        }
    return sum;
}

int StackExtended::max() const {
    int max = ~0 << (sizeof(max) * 8 - 1);
    ListItem* tmp = head;
    if (size != 0)
        for(int i = 0; i < size; ++i) {
            if (max < tmp->n) max = tmp->n;
            tmp = tmp->p;
        }
    return max;
}
