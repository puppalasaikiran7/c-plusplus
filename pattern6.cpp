#include<iostream>
using namespace std;

int main(){

    //floyd's triangle
    int rows;
    cin>>rows;

    int number=1;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout<<number<<" ";
            number++;
        }
        cout<<endl;
    }
    
}