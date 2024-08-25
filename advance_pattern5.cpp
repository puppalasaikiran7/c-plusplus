// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int row;
    cin>>row;
    int i;
    
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
    
    for(int m=1;m<=row;m++){
        for(int n=1;n<m;n++){
            cout<<" ";
        }
        for(int p=row;p>=m;p--){
            cout<<"*";
        }
        for(int q=1;q<=row-m;q++){
            cout<<"*";
        }
        cout<<endl;
        
    }
    

    return 0;
}