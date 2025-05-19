#include <iostream>
#include <string>

class Crawler {
public:
    void fetch(const std::string& url) {
        std::cout << "Fetching: " << url << std::endl;
        doNetworkCall(url); // ❌ Undefined function
    }
};

int main() {
    Crawler crawler;
    crawler.fetch(""); // Empty URL — should be checked
}
