#include <iostream>
using namespace std;

int main() {
    cout << "First/Last same (10-30): ";
    for (int i = 10; i <= 100; i++) {
        int last = i % 10;
        int first = i;
        while (first >= 10) {
            first /= 10;
        }
        if (first == last) cout << i << " ";
    }
}