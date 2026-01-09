#include <iostream>
using namespace std;

int main() {
    cout << "Palindrome after 1 add (10-20): ";
    for (int i = 10; i <= 20; i++) {
        int rev = 0;
        int temp = i;
        while (temp > 0) {
            rev = rev * 10 + (temp % 10);
            temp /= 10; 
        }
        int sum = i + rev;
        
        // Check if sum is palindrome
        int sumRev = 0;
        int tempSum = sum;
        while (tempSum > 0) { 
            sumRev = sumRev * 10 + (tempSum % 10);
            tempSum /= 10; 
        }
        
        if (sum == sumRev) {
            cout << i << " ";
        }
    }
}