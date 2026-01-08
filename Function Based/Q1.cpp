#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n;
    int reversed = 0;
    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    if(original == reversed){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    cout << "Is 121 Palindrome? " << isPalindrome(121) << endl;
}