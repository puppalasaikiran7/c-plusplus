#include <iostream>
using namespace std;

int main() {

    // Butterfly pattern

    int n;
    cin >> n;

    // Upper part of the butterfly
    for (int i = 1; i <= n; i++) {
        // Print stars in the first part
        for (int j = 1; j <= i; j++) {
            cout << "*"<<" ";
        }
        // Print spaces in the middle
        for (int k = 1; k <= 4 * (n - i); k++) {
            cout << " ";
        }
        // Print stars in the second part
        for (int j = 1; j <= i; j++) {
            cout <<" "<< "*";
        }
        cout << endl;
    }

    // Lower part of the butterfly (excluding the middle line)
    for (int i = n - 1; i >= 1; i--) {
        // Print stars in the first part
        for (int j = 1; j <= i; j++) {
            cout << "*"<<" ";
        }
        // Print spaces in the middle
        for (int k = 1; k <= 4 * (n - i); k++) {
            cout << " ";
        }
        // Print stars in the second part
        for (int j = 1; j <= i; j++) {
            cout <<" "<< "*";
        }
        cout << endl;
    }

    return 0;
}
