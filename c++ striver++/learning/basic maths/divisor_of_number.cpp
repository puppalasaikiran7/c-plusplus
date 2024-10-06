// Divisors of a number
// 100 points


// 55

// You are given an integer n. You need to find all the divisors of n. Return all the divisors of n as an array or list in a sorted order.



// A number which completely divides another number is called it's divisor.


// Example 1
// Input: n = 6

// Output = [1, 2, 3, 6]

// Explanation: The divisors of 6 are 1, 2, 3, 6.

// Example 2
// Input: n = 8

// Output: [1, 2, 4, 8]

// Explanation: The divisors of 8 are 1, 2, 4, 8.

// Example 3
// Input: n = 7

// Output:
// [1, 7]
// Constraints:
// 1 <= n <= 1000


///   code   ///

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> divisors(int n) {

        vector<int> v;

        for(int i=1;i<=n;i++){
            if(n%i==0){
                v.push_back(i);
            }
        }

        return v;

    }
};

int main(){

    Solution sol;

    int n;

    cin>>n;

    vector<int> divisor=sol.divisors(n);

    for(auto it:divisor){
        cout<<it<<" ";
    }

    return 0;
}