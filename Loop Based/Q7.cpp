#include <iostream>
using namespace std;

int main() {
    int num = 12345;
    int sum = 0;
    int pos = 1;
    int temp = num;
    while (temp > 0) {
        int d = temp % 10;
        if (pos % 2 == 0) {
            sum += d;
        }
        pos++;
        temp /= 10;
    }
    cout << "Sum of even position digits in " << num << ": " << sum;
}