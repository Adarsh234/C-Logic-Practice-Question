#include <iostream>
using namespace std;

int main() {
    cout << "Reverse divisible by 3 (10-50): ";
    for (int i = 10; i <= 50; i++) {
        int rev = 0;
        int temp = i;
        while (temp > 0) {
            rev = rev * 10 + (temp % 10);
            temp /= 10;
        }
        if (rev % 3 == 0){
            cout << i << " ";
        }
    }
}