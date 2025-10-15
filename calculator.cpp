#include <string>

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