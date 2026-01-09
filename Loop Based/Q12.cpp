#include <iostream>
using namespace std;

int main() {
    int num = 9875;
    while (num > 9) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    cout << "Repeated sum of 9875: " << num << "\n\n";
}