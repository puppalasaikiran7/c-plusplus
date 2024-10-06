// Reverse a number
// 100 points


// 52

// You are given an integer n. Return the integer formed by placing the digits of n in reverse order.


// Example 1
// Input: n = 25

// Output: 52

// Explanation: Reverse of 25 is 52.

// Example 2
// Input: n = 123

// Output: 321

// Explanation: Reverse of 123 is 321.

// Example 3
// Input: n = 54

// Output:
// 45
// Constraints:
// 0 <= n <= 5000
// n will contain no leading zeroes except when it is 0 itself.


////////     code      //////
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverseNumber(int n) {

        int reverse=0;
        while(n>0){
            
            int last_digit=n%10;
            reverse=reverse*10+last_digit;
            n=n/10;
        }

        return reverse;
    }
};

int  main(){

    Solution sol;

    int n;
    cin>>n;

    int reversing=sol.reverseNumber(n);
    cout<<reversing<<endl;

    return 0;
}