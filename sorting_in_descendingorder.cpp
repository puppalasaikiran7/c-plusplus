#include<bits/stdc++.h>
using namespace std;

int main(){

    //sorting array
    int arr[]={6,3,5,1,4,2};
    
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n);

    for(int i=0; i<n ; i++){
        cout<<arr[i];
    }
    cout<<endl;


    //sorting in reverse order 
    sort(arr,arr+n,greater<int>());
    
    for(int i=0; i<n ; i++){
        cout<<arr[i];
    }

    cout<<endl;

    //sorting the vector 
    vector<int> v ={6,3,5,1,4,2};

    sort(v.begin(),v.end());

    for(int i=0 ; i<v.size() ; i++){
        cout<<v[i];
    }

    cout<<endl;


    //array sorting in particular areas
    int arr1[]={6,3,5,1,4,2};
    
    sort(arr1+2,arr1+4);
    
    int n1=sizeof(arr1)/sizeof(arr1[1]);
    
    for(int i=0;i<n1;i++){
        cout<<arr1[i];
    }


    //string permutation 
    string s="123";
    do{
        cout<<s<<endl;
    }
    while(next_permutation(s.begin(),s.end()));

    //min and max values in the array 
    
    cout<<*max_element(arr,arr+n);
    
    cout<<endl;

    cout<<*min_element(arr,arr+n);

// #include <iostream>
// #include <algorithm>  // for reverse

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);  // size of the array

//     // Use reverse() function to reverse the array
//     std::reverse(arr, arr + n);

//     std::cout << "Reversed array: ";
//     for(int i = 0; i < n; i++) {
//         std::cout << arr[i] << " ";
//     }

//     return 0;
// }




    
}
