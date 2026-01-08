#include <iostream>
using namespace std;

int countDigits(int n) {
    int count = 0;
    if (n == 0) return 1;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}

int main() {
    cout << "Count digits 500: " << countDigits(500) << endl;
}