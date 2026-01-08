#include <iostream>
using namespace std;

int main() {
    int num = 8752;
    int count = 0;
    int temp = num;
    if (temp == 0) {
        count = 1;
    }
    else{
        while (temp > 0) {
            temp /= 10;
            count++;
        }
    }
    cout << "Digits in " << num << ": " << count << "\n\n";
}