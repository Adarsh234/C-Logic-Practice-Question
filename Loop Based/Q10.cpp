#include <iostream>
using namespace std;

int main() {
    int a = 12;
    int b = 15;
    int lcm;
    int maxVal = (a > b) ? a : b;
    while (true) {
        if (maxVal % a == 0 && maxVal % b == 0) {
            lcm = maxVal;
            break;
        }
        maxVal++;
    }
    cout << "LCM of " << a << " and " << b << ": " << lcm << "\n\n";
}