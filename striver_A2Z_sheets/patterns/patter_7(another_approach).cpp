#include<iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //2n+1 ( will print the odd numbers)
        for(int k=0;k<2*i+1;k++){
            cout<<"*";
        }
        for(int m=0;m<n-i-1;m++){
            cout<<" ";
        }
        cout<<endl;
    }
}