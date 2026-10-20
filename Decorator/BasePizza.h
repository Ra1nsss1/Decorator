#pragma once
#include "Pizza.h"
class BasePizza : public Pizza {
public:
    std::string getDescription() const override;
    int getCost() const override;
};