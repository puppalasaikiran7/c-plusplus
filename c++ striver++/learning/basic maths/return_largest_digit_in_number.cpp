// Return the largest digit in a number
// 100 points


// 40

// You are given an integer n. Return the largest digit present in the number.


// Example 1
// Input: n = 25

// Output: 5

// Explanation: The largest digit in 25 is 5.

// Example 2
// Input: n = 99

// Output: 9

// Explanation: The largest digit in 99 is 9.

// Example 3
// Input: 1

// Output:
// 1
// Constraints:
// 0 <= n <= 5000
// n will contain no leading zeroes except when it is 0 itself.


//////  code   //////

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestDigit(int n) {
        
        int largest_number=0;

        

        while(n>0){
            int last_digit=n%10;
            
            if(largest_number<last_digit){
                largest_number=last_digit;    
            }

            n=n/10;
            
        }
        return largest_number;

    }
};

int main(){

    Solution sol;

    int n;

    cin>>n;

    int largest=sol.largestDigit(n);

    cout<<largest<<endl;

    return 0;
}


