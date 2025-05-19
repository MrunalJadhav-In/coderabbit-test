#include <iostream>
#include <string>
#include <vector>

using namespace std;

class WebCrawler {
public:
    WebCrawler() {}

    void startCrawling(const string& url) {
        if (!isValidURL(url)) {
            cout << "Invalid URL: " << url << endl;
            return;
        }

        int responseCode = fetchURL(url); // Bug: fetchURL is undefined
        cout << "Response: " << responseCode << endl;

        parseHTML(responseContent); // Bug: responseContent is undefined
    }

private:
    bool isValidURL(const string& url) {
        return url.length() > 5;
    }

    void parseHTML(const string& html) {
        cout << "Parsing HTML of size " << html.size() << endl;

        for (int i = 0; i < html.size(); i++) {
            cout << html[i] << " "; // Just printing char by char
        }

        cout << endl;

        processLinks(); // Bug: processLinks() is undefined
    }
};

int main() {
    WebCrawler crawler;
    crawler.startCrawling("https://example.com");

    startCrawling("https://other.com"); // Bug: not inside any object or scope

    return 0;
}
