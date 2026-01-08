#include <iostream>
using namespace std;

bool isNeonNumber(int n) {
    int square = n * n;
    int sum = 0;
    while (square > 0) {
        sum += square % 10;
        square /= 10;
    }
    return sum == n;
}

int main() {
    cout << "Is 9 Neon? " << isNeonNumber(9) << endl;
}