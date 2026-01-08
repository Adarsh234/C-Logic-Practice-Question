#include <iostream>
using namespace std;

int main() {
    cout << "Numbers (1-20) with Prime digit sum: ";
    for (int i = 1; i <= 20; i++) {
        int sum = 0;
        int temp = i;
        while (temp > 0){ 
            sum += temp % 10; 
            temp /= 10; 
        }
        
        // Check if sum is prime
        bool isPrime = true;
        if (sum <= 1) {
            isPrime = false;
        }
        for (int j = 2; j * j <= sum; j++) {
            if (sum % j == 0) { 
                isPrime = false; 
                break;
            }
        }
        if (isPrime) {
            cout << i << " ";
        }
    }
}