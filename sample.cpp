#include <iostream>
#include <string>
#include <vector>

using namespace std;

class WebCrawler {
public:
    /**
 * @brief Constructs a WebCrawler instance.
 *
 * Initializes a new WebCrawler object with default settings.
 */
WebCrawler() {}

    /**
     * @brief Initiates the crawling process for the specified URL.
     *
     * Validates the provided URL, attempts to fetch its content, and parses the HTML if successful.
     *
     * @param url The web address to crawl.
     */
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
    /**
     * @brief Checks if the provided URL is valid based on its length.
     *
     * @param url The URL string to validate.
     * @return true if the URL length is greater than 5 characters, false otherwise.
     */
    bool isValidURL(const string& url) {
        return url.length() > 5;
    }

    /**
     * @brief Parses the provided HTML content and outputs its characters.
     *
     * Prints the size of the HTML string and each character individually to the standard output.
     *
     * @param html The HTML content to be parsed.
     */
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
// force diff
