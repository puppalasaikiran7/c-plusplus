#include<iostream>
using namespace std;

int main(){

    int rows , col;
    cin >> rows>>col;

    //rectangle pattern 
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=col;j++){
            cout<<"*";
        }
       cout<<endl;
    }

}