#include <iostream>
using namespace std;

bool isDuckNumber(int n) {
    while (n > 0) {
        if (n % 10 == 0) {
            return true;
        }
        n /= 10;
    }
    return false;
}

int main() {
    cout << "Is 102 Duck? " << isDuckNumber(102) << endl;
}