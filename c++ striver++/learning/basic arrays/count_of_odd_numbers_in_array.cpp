// Count of odd numbers in array
// 100 points


// 36

// Given an array of n elements. The task is to return the count of the number of odd in the array.


// Example 1
// Input: n=5, array = [1,2,3,4,5]



// Output: 3



// Explanation: The three odd elements are (1,3,5).

// Example 2
// Input: n=6, array = [1,2,1,1,5,1]



// Output: 5



// Explanation: The five odd elements are one 5 and four 1's.

// Example 3
// Input: n=5, array = [1,3,5,7,9]

// Output:
// 5
// Constraints:
// 1 <= n <= 105
// 1 <= arr[i] <= 104

///   code ///
#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int countOdd(int arr[], int n){

        long count=0;

        for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
                count++;
            }
        }

        return count;
          
    }
};


int main(){

    Solution sol;

    int arr []={1,2,3,4,5};

    int n=sizeof(arr)/sizeof(arr[1]);

    int odd_digits=sol.countOdd(arr,n);

    cout<<odd_digits<<endl;

    return 0;
}