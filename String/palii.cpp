#include <iostream>
#include <cctype> // for tolower and isalnum
#include <string>
using namespace std;

bool ispalli(string s) {
    string filteredString = "";

    // Convert to lowercase and remove non-alphanumeric characters
    for (char c : s) {
        if (isalnum(c)) {
            filteredString += tolower(c);
        }
    }

    int n = filteredString.length();
    int start = 0;
    int end = n - 1;

    // Check if the filtered string is a palindrome
    while (start < end) {
        if (filteredString[start++] != filteredString[end--]) {
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    cout << "Enter the string: " << endl;
    getline(cin, s); // Using getline to read the entire line including spaces

    if (ispalli(s)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
