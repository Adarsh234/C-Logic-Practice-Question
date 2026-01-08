#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int rev = 0;
    while (n > 0) {
        int temp = n % 10;
        rev = rev * 10 + temp;
        n /= 10;
    }
    return rev;
}
int main() {
    cout << "Reverse 1234: " << reverseNumber(1234) << endl;
}