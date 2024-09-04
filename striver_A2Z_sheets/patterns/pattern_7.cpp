#include<iostream>
using namespace std;

void printing(int row){
    
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        for(int l=1;l<i;l++){
            cout<<"*";
        }
        cout<<endl;
    }
}


int main(){

    

    int t;
    cin>>t;
    for(int i=0;i<t;i++){

        int row;
        cin>>row;
        printing(row);
    }
}