#include "header.hpp"

void coffee(double coffeePrice, double salesTax, double coffeeCupPrice)
{
    std::cout << ((coffeePrice + coffeeCupPrice) * salesTax) + coffeeCupPrice + coffeePrice << "\n";
}