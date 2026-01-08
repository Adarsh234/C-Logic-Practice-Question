#include <iostream>
using namespace std;

int main() {
    cout << "Strong Numbers 1 to 200: ";
    for (int i = 1; i <= 200; i++) {
        int sumFact = 0;
        int temp = i;
        while (temp > 0) {
            int digit = temp % 10;
            int fact = 1;
            
            //Calculating Factorial
            for (int k = 1; k <= digit; k++) {
                fact *= k;
            } 
            sumFact += fact;
            temp /= 10;
        }
        if (sumFact == i) {
            cout << i << " ";
        }
    }
}