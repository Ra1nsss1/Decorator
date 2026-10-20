#pragma once
#include <string>
class Pizza {
public:
    virtual ~Pizza() = default;
    virtual std::string getDescription() const = 0;
    virtual int getCost() const = 0;
};