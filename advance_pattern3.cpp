#include<iostream>
using namespace std;

int main(){
    //inverted half pyramid 
    
    int row;
    cin>>row;
    
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=row;k++){
            cout<<"*"<<" ";
        }
        
        cout<<endl;
    }
    
}