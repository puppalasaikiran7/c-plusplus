#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Input the number
    int factorial = 1;  // Initialize factorial to 1
    
    for(int i = 1; i <= n; i++) {
        factorial *= i;  // Multiply factorial by i
    }

    cout << "Factorial of " << n << " is: " << factorial << endl;

    return 0;
}
