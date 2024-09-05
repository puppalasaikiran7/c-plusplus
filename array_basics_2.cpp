#include<iostream>
using namespace std;

int main(){

    //how to give the value of arrays apart from the way we gave in the last array_basics.cpp
    int arr[5];
    for(int i=0;i<=4;i++){
        cin>>arr[i];
    }

    cout<<endl;
    
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}


// array always goes by the pass by reference not pass by value 
// array is list of variables of similar data type