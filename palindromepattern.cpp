#include <iostream>
using namespace std;

int main() {
    int i, j, r;
    cin >> r;  // Take input for number of rows

    for (i = 1; i <= r; i++) {
        // Print leading spaces
        for (j = 1; j <= r - i; j++) {
            cout << "  ";
        }

        // Print decreasing numbers
        int k = i;
        for (j = 1; j <= i; j++) {
            cout << k-- << " ";
        }

        // Print increasing numbers
        k = 2;
        for (j = 1; j < i; j++) {
            cout << k++ << " ";
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
