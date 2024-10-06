// Check for perfect number
// 90 points


// 58

// You are given an integer n. You need to check if the number is a perfect number or not. Return true if it is a perfect number, otherwise, return false.



// A perfect number is a number whose proper divisors add up to the number itself.


// Example 1
// Input: n = 6

// Output: true

// Explanation: Proper divisors of 6 are 1, 2, 3.

// 1 + 2 + 3 = 6.

// Example 2
// Input: n = 4

// Output: false

// Explanation: Proper divisors of 4 are 1, 2.

// 1 + 2 = 3.

// Example 3
// Input: n = 28

// Output:
// true
// Constraints:
// 1 <= n <= 5000


////   code   ////

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPerfect(int n) {

        int copy=n;

        int sum=1;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                sum+=i;
                if(i!=n/i){
                    sum+=n/i;
                }
            }
        }

        if(copy==sum){
            return true;
        }
        else{
            return false;
        }

    }
};


int main(){

    Solution sol;

    int n;
    cin>>n;

    bool perfect=sol.isPerfect(n);

    cout<<perfect<<endl;

    return 0;
}