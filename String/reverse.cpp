#include <iostream>
#include <sstream>
#include <algorithm>

std::string reverseWordsInString(const std::string& input) {
    std::istringstream iss(input);
    std::ostringstream oss;
    std::string word;
    
    // Read each word from the input string
    while (iss >> word) {
        // Reverse the word
        std::reverse(word.begin(), word.end());
        // Add the reversed word to the output stream
        oss << word << " ";
    }
    
    std::string reversedString = oss.str();
    // Remove the trailing space
    if (!reversedString.empty()) {
        reversedString.pop_back();
    }
    
    return reversedString;
}

int main() {
    std::string input = "hello i am sudha";
    std::string output = reverseWordsInString(input);
    std::cout << output << std::endl;
    return 0;
}
