#include <iostream>
using namespace std;

int powerXN(int x, int n) {
    int res = 1;
    for (int i = 0; i < n; i++) {
        res *= x;
    }
    return res;
}

int main() {
    cout << "2 power 3: " << powerXN(2, 3) << endl;
}