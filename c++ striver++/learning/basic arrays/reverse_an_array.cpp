// Reverse an array
// 100 points


// 67

// Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplace.


// Example 1
// Input: n=5, arr = [1,2,3,4,5]



// Output: [5,4,3,2,1]



// Explanation: The reverse of the array [1,2,3,4,5] is [5,4,3,2,1]

// Example 2
// Input: n=6, arr = [1,2,1,1,5,1]



// Output: [1,5,1,1,2,1]



// Explanation: The reverse of the array [1,2,1,1,5,1] is [1,5,1,1,2,1].

// Example 3
// Input: n=3, arr = [1,2,1]

// Output:
// [1,2,1]
// Constraints:
// 1 <= n <= 104

// 1 <= arr[i] <= 105

///   code   ///

#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void reverse(int arr[], int n){

        for(int i=0;i<n/2;i++){
            int temp=arr[i];
            arr[i]=arr[n-i-1];
            arr[n-i-1]=temp;
        }
        
    }

};

void printarray(int arr[] , int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    Solution sol;

    int arr []={5,4,3,2,1};

    int n=sizeof(arr)/sizeof(arr[1]);

    sol.reverse(arr,n);
    cout<<"reversed array is : ";
    printarray(arr,n);

    return 0;
}