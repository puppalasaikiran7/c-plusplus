#include <iostream>
using namespace std;

int main() {

    
    int n;
    cin >> n;

    char startChar = 'A' + n - 1; // Start with the correct character based on n

    for (int i = 0; i < n; i++) {
        char ch = startChar; // Initialize to the starting character for each row
        
        for (int j = 0; j <= i; j++) {
            cout << ch << " "; // Print character and a space
            ch--; // Move to the previous character
        }
        
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
