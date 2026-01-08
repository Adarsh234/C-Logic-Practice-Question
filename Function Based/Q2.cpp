#include <iostream>
using namespace std;

int repeatedSum(int n) {
    while (n > 9) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    return n;
}

int main() {
    cout << "Repeated sum of 99: " << repeatedSum(993) << endl;
}