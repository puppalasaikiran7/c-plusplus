#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        
        //upper part
        for(int j=n;j>=i;j--){
            cout<<"*"<<" ";
        }
        
        for(int k=1;k<(2*i)-1;k++){
            cout<<"  ";
        }
        
        for(int m=n;m>=i;m--){
            cout<<" "<<"*";
        }
    
        cout<<endl;
    }
    
    for(int a=1;a<=n;a++){
        for(int b=1;b<=a;b++){
            cout<<"*"<<" ";
        }
        for(int k=1;k<=2*(n-a);k++){
            cout<<"  ";
        }
        for(int c=1;c<=a;c++){
            cout<<" "<<"*";
        }
        cout<<endl;
    }
    
    
}