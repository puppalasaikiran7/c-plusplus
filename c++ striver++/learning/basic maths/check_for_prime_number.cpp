// Check for prime number
// 90 points


// 51

// You are given an integer n. You need to check if the number is prime or not. Return true if it is a prime number, otherwise return false.



// A prime number is a number which has no divisors except 1 and itself.


// Example 1
// Input: n = 5

// Output: true

// Explanation: The only divisors of 5 are 1 and 5 , So the number 5 is prime.

// Example 2
// Input: n = 8

// Output: false

// Explanation: The divisors of 8 are 1, 2, 4, 8, thus it is not a prime number.

// Example 3
// Input: n = 9

// Output:
// false
// Constraints:
// 2 <= n <= 5000


/////   code   /////

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        //your code goes here
        

        for(int i=2;i<sqrt(n);i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
};

int main(){

    Solution sol;

    int n;

    cin>>n;

    bool prime=sol.isPrime(n);

    cout<<prime<<endl;

    return 0;
}