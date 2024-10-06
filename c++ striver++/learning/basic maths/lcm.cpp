// LCM of two numbers
// 100 points


// 47

// You are given two integers n1 and n2. You need find the Lowest Common Multiple (LCM) of the two given numbers. Return the LCM of the two numbers.



// The Lowest Common Multiple (LCM) of two integers is the lowest positive integer that is divisible by both the integers.


// Example 1
// Input: n1 = 4, n2 = 6

// Output: 12

// Explanation: 4 * 3 = 12, 6 * 2 = 12.

// 12 is the lowest integer that is divisible both 4 and 6.

// Example 2
// Input: n1 = 3, n2 = 5

// Output: 15

// Explanation: 3 * 5 = 15, 5 * 3 = 15.

// 15 is the lowest integer that is divisible both 3 and 5.

// Constraints:
// 1 <= n1, n2 <= 1000
// Note:
// Can you come up with a solution with less than O(n) time complexity?

///   code   ///

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int LCM(int n1,int n2) {
        
        int lcm;
        int i=1;
        int n=max(n1,n2);
        while(true){
            int mul=n*i;
            if(mul%n1==0 && mul%n2==0){
                lcm=mul;
                break;
            }
            i++;
        }
        return lcm;
    }
};

// optimised method 
int GCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to compute LCM using GCD
int LCM(int a, int b) {
    return (a * b) / GCD(a, b);
}



int main(){

    Solution sol;

    int n1,n2;

    cin>>n1>>n2;

    int lcm=sol.LCM(n1,n2);

    cout<<lcm<<endl;

    return 0;

}