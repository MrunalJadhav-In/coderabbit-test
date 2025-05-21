#include <iostream>
#include <string>

class Crawler {
public:
    void fetch(const std::string& url) {
        if (url.empty()) {
            std::cerr << "Invalid URL" << std::endl;
            return;
        }
        std::cout << "Fetching: " << url << std::endl;
        // Simulate fetch
    }
};

int main() {
    Crawler crawler;
    crawler.fetch("https://example.com");
    return 0;
}
