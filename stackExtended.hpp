#pragma once
#include "stack.hpp"



class StackExtended : public Stack {
public:
    int sum() const noexcept;
    int max() const noexcept;
};
