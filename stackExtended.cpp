#include "stackExtended.hpp"


int StackExtended::sum() const noexcept {
    int sum = 0;
    ListItem* tmp = head;
    if (size != 0)
        for(int i = 0; i < size; ++i) {
            sum += tmp->item;
            tmp = tmp->p_prevItem;
        }
    return sum;
}

int StackExtended::max() const noexcept {
    int max = ~0 << (sizeof(max) * 8 - 1);
    ListItem* tmp = head;
    if (size != 0)
        for(int i = 0; i < size; ++i) {
            if (max < tmp->item) max = tmp->item;
            tmp = tmp->p_prevItem;
        }
    return max;
}
