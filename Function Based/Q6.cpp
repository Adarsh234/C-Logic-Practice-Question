#include <iostream>
using namespace std;

void countEvenOdd(int n) {
    int even = 0, odd = 0;
    while (n > 0) {
        int d = n % 10;
        if (d % 2 == 0){
            even++;
        }
        else{ 
            odd++;
        }
        n /= 10;
    }
    cout << "Even Digits: " << even << ", Odd Digits: " << odd << endl;
}

int main() {
    cout << "Count digits for 1234: "; countEvenOdd(1234);
}