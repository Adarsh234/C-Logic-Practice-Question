#include <iostream>
using namespace std;

int productOfDigits(int n) {
    int prod = 1;
    if (n == 0) {
        return 0;
    }
    while (n > 0) {
        prod *= (n % 10);
        n /= 10;
    }
    return prod;
}
int main() {
    cout << "Product of digits 222345: " << productOfDigits(222345) << endl;
}