#include<iostream>
using namespace std;

int main(){
    int i;
    int j;
    int k;
    int l;
    
    int m;
    int n;
    int p;
    int q;
    
    int row;
    cin>>row;
    
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int k=1;k<=2*(row-i);k++){
            cout<<" ";
        }
        for(int l=1;l<=i;l++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    for(int i=row;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int k=1;k<=2*(row-i);k++){
            cout<<" ";
        }
        for(int l=1;l<=i;l++){
            cout<<"*";
        }
        cout<<endl;
    }

}