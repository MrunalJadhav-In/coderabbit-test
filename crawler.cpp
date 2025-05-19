#include <iostream>
#include <string>

class Crawler {
public:
    /**
     * @brief Initiates a network fetch for the specified URL.
     *
     * Outputs the URL to the console and attempts to perform a network call using the provided URL.
     *
     * @param url The URL to fetch.
     */
    void fetch(const std::string& url) {
        std::cout << "Fetching: " << url << std::endl;
        doNetworkCall(url); // ❌ Undefined function
    }
};

int main() {
    Crawler crawler;
    crawler.fetch(""); // Empty URL — should be checked
}
