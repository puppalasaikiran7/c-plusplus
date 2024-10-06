// Count all digits of a number
// 100 points


// 76

// You are given an integer n. You need to return the number of digits in the number.



// The number will have no leading zeroes, except when the number is 0 itself.


// Example 1
// Input: n = 4

// Output: 1

// Explanation: There is only 1 digit in 4.

// Example 2
// Input: n = 14

// Output: 2

// Explanation: There are 2 digits in 14.

// Example 3
// Input: n = 234

// Output:
// 3
// Constraints:
// 0 <= n <= 5000
// n will contain no leading zeroes except when it is 0 itself.



/////     code    ///////
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDigit(int n) {
        if(n==0){
            return 1;
        }

        int count=0;
        while(n>0){
            int last_digit=n%10;
            count++;
            n=n/10;
        }
        return count;

    }
};

int main(){
    Solution sol;
    int n;
    cin>>n;
    
    int countdigit=sol.countDigit(n);
    cout<<countdigit<<endl;

    return 0;

}