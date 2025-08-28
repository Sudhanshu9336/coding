#include <iostream>
using namespace std;

int getlength(char name[]) {
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int ispalli(char name[], int n) {
    int s = 0;
    int e = n - 1;
    while(s < e) {
        if(name[s++] != name[e--]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char name[10];
    cout << "Enter the name: " << endl;
    cin >> name;
    int len = getlength(name);
    cout << "Length: " << len << endl;
    int pal = ispalli(name, len);
    if(pal == 1) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}
