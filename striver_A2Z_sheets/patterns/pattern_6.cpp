#include<iostream>
using namespace std;

void printing(int n){

    for(int i=n;i>=1;i--){
        
        for(int j=1;j<=i;j++){
            cout<<j;
            
        }
        cout<<endl;
    }
}


int main(){

    //same pattern 5 but with number 
    //12345
    //1234
    //123
    //12
    //1

    int t;
    cin>>t;
    for(int i=0;i<t;i++){

        int n;
        cin>>n;
        printing(n);
    }
}