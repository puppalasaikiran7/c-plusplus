#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int l=1;l<=n;l++){
        for(int k=1;k<=n-l;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}