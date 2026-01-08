#include <iostream>
using namespace std;

int main() {
int start = 1, end = 500;
    cout << "Armstrong numbers " << start << " to " << end << ": ";
    for (int i = start; i <= end; i++) {
        int temp = i, digits = 0, sum = 0;
        
        // Count digits
        int n_copy = i;
        while (n_copy > 0) { 
            n_copy /= 10; 
            digits++; 
        }
        
        while (temp > 0) {
            int d = temp % 10;
            int p = 1; 
            
            //Power Loop
            for(int k=0; k<digits; k++) {
                p *= d;
            }
            sum += p;
            temp /= 10;
        }
        if (sum == i) cout << i << " ";
    }
}