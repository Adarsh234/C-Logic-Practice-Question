#include <iostream>
using namespace std;

int main() {
    int count = 0;
    for (int i = 1; i <= 20; i++) {
        int sum = 0;
        int temp = i;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum % 2 == 0) {
            count++;
            // cout << i << endl;
        }
    }
    cout << "Count of numbers (1-20) with even sum digits: " << count;
}