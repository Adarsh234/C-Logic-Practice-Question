#include <iostream>
using namespace std;

int myPower(int base, int exp) {
    int res = 1;
    for (int i = 0; i < exp; i++) {
        res *= base;
    }
    return res;
}

int countDigits(int n) {
    int count = 0;
    if (n == 0) return 1;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}

bool isArmstrong(int n) {
    int original = n;
    int digits = countDigits(n);
    int sum = 0;
    while (n > 0) {
        int d = n % 10;
        sum += myPower(d, digits);
        n /= 10;
    }
    return sum == original;
}

int main() {
    cout << "Is 153 Armstrong? " << isArmstrong(153) << endl;
}