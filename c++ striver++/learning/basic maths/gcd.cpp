// GCD of two numbers
// 100 points


// 51

// You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers. Return the GCD of the two numbers.



// The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers.


// Example 1
// Input: n1 = 4, n2 = 6

// Output: 2

// Explanation: Divisors of n1 = 1, 2, 4, Divisors of n2 = 1, 2, 3, 6

// Greatest Common divisor = 2.

// Example 2
// Input: n1 = 9, n2 = 8

// Output: 1

// Explanation: Divisors of n1 = 1, 3, 9 Divisors of n2 = 1, 2, 4, 8.

// Greatest Common divisor = 1.

// Example 3
// Input: n1 = 6, n2 = 12

// Output:
// 6
// Constraints:
// 1 <= n1, n2 <= 1000
// Note:
// Can you come up with a solution with less than O(n) time complexity?


///   code   ///

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int GCD(int n1,int n2) {
        int gcd=1;

        for(int i=1;i<=min(n1,n2);i++){
            if(n1%i==0 && n2%i==0){
                gcd=i;
            }
        }
        return gcd;
    }
};


// euclidian method
class Solution1{
public:
    int gcd(int a,int b){

        while(b!=0){
            int temp=b;
            a=temp;
            b=a%b;
        }
        return a;
    }
};


int main(){

    Solution sol;

    int n1,n2;

    cin>>n1>>n2;

    int gcd=sol.GCD(n1,n2);

    cout<<gcd<<endl;

    return 0;
}