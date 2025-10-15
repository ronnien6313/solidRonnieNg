#include <fstream>
#include <string>

class Report {
public:
    std::string title;
    std::string data;

    Report(const std::string& t, const std::string& d) : title(t), data(d) {}

    std::string formatHtml() {
        return "<h1>" + title + "</h1>\n<p>" + data + "</p>";
    }

    void saveToFile(const std::string& filename) {
        std::ofstream out(filename);
        out << formatHtml();
        out.close();
    }
};