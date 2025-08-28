#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int i = 0, n, ans = 0;
    cout << "Enter the digit: " << endl;
    cin >> n;

    while (n != 0) {
        int digit = n % 10;
        if (digit == 1) {
            ans = ans + pow(2, i);
        }        
        n=n>>1;
        i++;
    }

    cout << "Decimal number is: " << ans << endl;
    return 0;
}
