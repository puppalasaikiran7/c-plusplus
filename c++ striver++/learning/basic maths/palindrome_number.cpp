// Palindrome number
// 100 points


// 32

// You are given an integer n. You need to check whether the number is a palindrome number or not. Return true if it's a palindrome number, otherwise return false.



// A palindrome number is a number which reads the same both left to right and right to left.


// Example 1
// Input: n = 121

// Output: true

// Explanation: When read from left to right : 121.

// When read from right to left : 121.

// Example 2
// Input: n = 123

// Output: false

// Explanation: When read from left to right : 123.

// When read from right to left : 321.

// Example 3
// Input: 101

// Output:
// true
// Constraints:
// 0 <= n <= 5000
// n will contain no leading zeroes except when it is 0 itself.


////////    code     ////////


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int n) {

        int original=n;

        int reverse=0;

        while(n>0){
            int last_digit=n%10;

            reverse=reverse*10+last_digit;

            n=n/10;
        }

        if(original==reverse){
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

    bool palindrome=sol.isPalindrome(n);
    cout<<palindrome<<endl;

    //1 for true and 0 for false
}