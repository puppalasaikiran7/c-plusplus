#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for(int i=n;i>=1;i--){
        char ch='A';
        for(int j=n;j>n-i;j--){
            cout<<ch;
            ch++;
            
        }
        cout<<endl;
    }
    
}