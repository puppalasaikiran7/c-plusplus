// Count of prime numbers till N
// 100 points


// 53

// You are given an integer n. You need to find out the number of prime numbers in the range [1, n] (inclusive). Return the number of prime numbers in the range.



// A prime number is a number which has no divisors except, 1 and itself.


// Example 1
// Input: n = 6

// Output: 3

// Explanation: Prime numbers in the range [1, 6] are 2, 3, 5.

// Example 2
// Input: n = 10

// Output: 4

// Explanation: Prime numbers in the range [1, 10] are 2, 3, 5, 7.

// Example 3
// Input: n = 20

// Output:
// 8
// Constraints:
// 2 <= n <= 1000
// Note:
// Can you come up with a solution with time complexity less than O(n2)?



////   code   /////

#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
    bool isprime(int n){
        int count=0;

        for(int i=1;i<=n;i++){
            if(n%i==0){
                count++;
            }
        }
        if(count==2) return true;
        return false;
    }

public:
    int primeUptoN(int n) {
        int count=0;

        for(int i=2;i<=n;i++){
            if(isprime(i)){
                count++;
            }
        }
        return count;

    }
};

int main(){
    Solution sol;

    int n;

    cin>>n;

    int primenumber=sol.primeUptoN(n);

    cout<<primenumber<<endl;
}