// Check if the number is armstrong
// 100 points



// You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.



// An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.


// Example 1
// Input: n = 153

// Output: true

// Explanation: Number of digits : 3.

// 1 ^ 3 + 5 ^ 3 + 3 ^ 3 = 1 + 125 + 27 = 153.

// Therefore, it is an Armstrong number.

// Example 2
// Input: n = 12

// Output: false

// Explanation: Number of digits : 2.

// 1 ^ 2 + 2 ^ 2 = 1 + 4 = 5.

// Therefore, it is not an Armstrong number.

// Example 3
// Input: n = 370

// Output:
// true
// Constraints:
// 0 <= n <= 5000

////   code   ////

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isArmstrong(int n) {

        int copy=n;
                
        int summing=0;

        while(n>0){
            int last_digit=n%10;
            summing+=pow(last_digit,3);
            n=n/10;
        }

        if(copy==summing){
            return true;
        }
        else{
            return false;
        }

        
    }
};

int main(){

    Solution sol;

    int  n;

    cin>>n;

    bool armstrong=sol.isArmstrong(n);

    cout<<armstrong<<endl;

    return 0;
}