#include<iostream>
using namespace std;

int main(){
    //inverted half pyramid 
    
    int n;
    cin>>n;
    
    

    for(int i=n;i>=1;i--){
        int num=1;
        for(int j=1;j<=i;j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
    
}