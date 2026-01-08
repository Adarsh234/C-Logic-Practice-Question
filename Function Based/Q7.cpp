#include <iostream>
using namespace std;

bool isHarshad(int n) {
    int sum = 0;
    int temp = n;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    return (n % sum == 0);
}

int main() {
    cout << "Is 225 Harshad? " << isHarshad(225) << endl;
}