#include <string>
#include <iostream>

class DiscountCalculator {
public:
    double calculate(const std::string& customerType, double amount) {
        if (customerType == "Loyal") {
            return amount * 0.95;
        } else if (customerType == "VIP") {
            return amount * 0.90;
        } else {
            return amount;
        }
    }
};

// Included for demonstration
int main() {
    DiscountCalculator calc;
    double price = 1000;

    std::cout << "VIP Customer Price: " << calc.calculate("VIP", price) << "\n";
    std::cout << "Loyal Customer Price: " << calc.calculate("Loyal", price) << "\n";
    std::cout << "Other Customer Price: " << calc.calculate("Other", price) << "\n";
}
