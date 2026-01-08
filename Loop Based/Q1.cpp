#include <iostream>
using namespace std;

int main() {
    int N = 100;
    cout << "Palindromes 1 to " << N << ": ";
    for (int i = 1; i <= N; i++) {
        int temp = i, rev = 0;
        while (temp > 0) {
            rev = rev * 10 + (temp % 10);
            temp /= 10;
        }
        if (i == rev) cout << i << " ";
    }
}