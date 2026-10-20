#include "Ingredients.h"

std::string Cheese::getDescription() const {
    return pizza->getDescription() + ", сир";
}

int Cheese::getCost() const {
    return pizza->getCost() + 25;
}

std::string Sausage::getDescription() const {
    return pizza->getDescription() + ", ковбаса";
}

int Sausage::getCost() const {
    return pizza->getCost() + 35;
}

std::string Vegetables::getDescription() const {
    return pizza->getDescription() + ", овочі";
}

int Vegetables::getCost() const {
    return pizza->getCost() + 20;
}

std::string Sauce::getDescription() const {
    return pizza->getDescription() + ", соус";
}

int Sauce::getCost() const {
    return pizza->getCost() + 10;
}