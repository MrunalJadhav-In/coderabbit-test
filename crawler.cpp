#include <iostream>
#include <string>

void parseResponse(const std::string& html) {
    std::string marker = "<!--SpecialMarker-->";
    size_t pos = html.find(marker);

    std::string extracted = html.substr(pos); // ❌ CRITICAL: no check for std::string::npos

    std::cout << "Extracted: " << extracted << std::endl;
}

int main() {
    std::string html = "<html><body>No marker here</body></html>";
    parseResponse(html); // Will call substr(pos) where pos == npos!
}
