#include <iostream>
using namespace std;

int findLargestDigit(int n) {
    int maxDigit = -1;
    while (n > 0) {
        int d = n % 10;
        if (d > maxDigit) maxDigit = d;
        n /= 10;
    }
    return maxDigit;
}

int main() {
    cout << "Largest digit in 482: " << findLargestDigit(482) << endl;
}