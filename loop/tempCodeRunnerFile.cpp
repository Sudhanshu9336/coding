#include<math.h>
using namespace std;

int main() {
    int n, ans = 0, i = 0;
    cout << "Enter the number: " << endl;
    cin >> n;

    while (n != 0) {
        int bit = n & 1;
        ans = ans + (bit * pow(10, i));
        n = n >> 1;
        i = i + 1;  // Corrected this line, changed i = i++; to i = i + 1;
    }

    cout << "Binary number is: " << ans << endl;
    return 0;  // Added a return statement for completeness
}
 