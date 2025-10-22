#include <iostream>
#include <sstream>

class Report {
public:
    std::string title;
    std::string data;

    Report(const std::string& t, const std::string& d) : title(t), data(d) {}

    int processData() {
        std::istringstream iss(data);
        int number, sum = 0;
        while (iss >> number) {
            sum += number;
        }
        return sum;
    }

    std::string format() {
        return "<h1>" + title + "</h1>\n<p>" + title + ": " + std::to_string(processData()) + "</p>";
    }

};

// Included for demonstration
int main() {
    Report report("Total sales", "51 42 39 60");
    std::cout << report.format();
}
