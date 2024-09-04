#include<iostream>
using namespace std;

int main(){

    //     A 
    //   A B A 
    // A B C B A 
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        char ch='A';
        for(int k=1;k<=i;k++){
            cout<<ch;
            ch++;
        }
        ch-=2;
        for(int m=1;m<i;m++){
            cout<<ch;
            ch--;
        }
        cout<<endl;
    }
    
}