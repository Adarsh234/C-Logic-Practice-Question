#include <iostream>
using namespace std;

int diffEvenOddSum(int n) {
    int evenSum = 0, oddSum = 0;
    while (n > 0) {
        int d = n % 10;
        if (d % 2 == 0) evenSum += d;
        else oddSum += d;
        n /= 10;
    }
    if(evenSum > oddSum){
        return evenSum - oddSum;
    }
    else{
        return oddSum - evenSum;
    }
}
int main() {
    cout << "Diff sum 1234: " << diffEvenOddSum(1234) << endl;
}