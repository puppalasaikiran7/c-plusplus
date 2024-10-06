// Count number of odd digits in a number
// 100 points


// 44

// You are given an integer n. You need to return the number of odd digits present in the number.



// The number will have no leading zeroes, except when the number is 0 itself.


// Example 1
// Input: n = 5

// Output: 1

// Explanation: 5 is an odd digit.

// Example 2
// Input: n = 25

// Output: 1

// Explanation: The only odd digit in 25 is 5.

// Example 3
// Input: n = 15

// Output:
// 2
// Constraints:
// 0 <= n <= 5000
// n will contain no leading zeroes except when it is 0 itself.


/////    code   /////

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countOddDigit(int n) {
        
        int odd_digit=0;

        while(n>0){
            int last_digit=n%10;
            if(last_digit % 2 != 0){
                odd_digit++;
            }
            n=n/10;
        }
        return odd_digit;


    }
};

int main(){

    Solution sol;

    int n;

    cin>>n;

    int countodddigit=sol.countOddDigit(n);
    
    cout<<countodddigit<<endl;

    return 0;
}