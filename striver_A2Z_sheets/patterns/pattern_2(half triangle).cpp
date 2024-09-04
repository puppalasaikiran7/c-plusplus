#include<iostream>
using namespace std;

void printing(int n){

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

}



int main(){

    //half pyramid 
    // *
    // **
    // ***
    // ****

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        printing(n);
    }
}