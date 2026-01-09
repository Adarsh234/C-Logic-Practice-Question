#include <iostream>
using namespace std;

int main() {
    cout << "Numeric Pyramid Pattern:\n";
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        // Spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        // Numbers
        for (int k = 1; k <= i; k++) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}