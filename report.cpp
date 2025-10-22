#include <iostream>
#include <sstream>

class DataProcessor;
class ReportFormatter;

class DataProcessor {
    public:
        virtual int processData(const std::string& data) = 0;
        virtual ~DataProcessor() = default;
};

class ReportFormatter {
    public:
        virtual std::string formatReport(const std::string& title, int total) = 0;
        virtual ~ReportFormatter() = default;
};

class Data : public DataProcessor {
    public:
        int processData(const std::string& data) {
            std::istringstream iss(data);
            int number, sum = 0;
            while (iss >> number) {
                sum += number;
            }
            return sum;
        }
};

class Formatter : public ReportFormatter {
    public:
        std::string formatReport(const std::string& title, int total) {
            return "<h1>" + title + "</h1>\n<p>" + title + ": " + std::to_string(total) + "</p>";
        }
};


class Report {
public:
    std::string title;
    std::string data;
    DataProcessor& processor;
    ReportFormatter& formatter;
    Report(const std::string& t, const std::string& d, DataProcessor& p, ReportFormatter& f) : title(t), data(d), processor(p), formatter(f) {
    }

    std::string format() {
        int total = processor.processData(data);
        return formatter.formatReport(title, total);
    }
};


// Included for demonstration
int main() {
    Report report("Total sales", "51 42 39 60");
    std::cout << report.format();
}