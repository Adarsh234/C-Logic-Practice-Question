#include <iostream>
using namespace std;

int main() {
    int num = 12321;
    int rev = 0;
    int temp = num;
    while (temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }
    cout << "Original: " << num << ", Reversed: " << rev;
    if(num == rev){
        cout << " (Same)";
    }else {
        cout << " (Different)";
    }
}