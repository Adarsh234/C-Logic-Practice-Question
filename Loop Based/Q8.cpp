#include <iostream>
using namespace std;

int main() {
    cout << "Numbers (1-30) with only odd digits: ";
    for (int i = 1; i <= 30; i++) {
        bool allOdd = true;
        int temp = i;
        while (temp > 0) {
            if ((temp % 10) % 2 == 0) {
                allOdd = false;
                break;
            }
            temp /= 10;
        }
        if (allOdd) {
            cout << i << " ";
        }
    }
}