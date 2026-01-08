#include <iostream>
using namespace std;

bool isAutomorphic(int n) {
    long long square = (long long)n * n;
    int temp = n;
    while (temp > 0) {
        if (temp % 10 != square % 10){ 
            return false;
        }
        temp /= 10;
        square /= 10;
    }
    return true;
}

int main() {
    cout << "Is 25 Automorphic? " << isAutomorphic(25) << endl;
}