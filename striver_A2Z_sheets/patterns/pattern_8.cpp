#include<iostream>
using namespace std;

void printing(int row){
    
    for(int i=1;i<=row;i++){
        for(int k=1;k<i;k++){
            cout<<" ";
        }
        for(int j=row;j>=i;j--){
            cout<<"*";
        }
        for(int m=1;m<=row-i;m++){
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