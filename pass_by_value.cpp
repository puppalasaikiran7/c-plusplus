#include<iostream>
using namespace std;

//pass by value
//in the given example code below the num value sends the copy of it and does every thing with that but the original value remains the same 

void dosomething(int num){

    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;

}


int main(){

    int num=10;
    dosomething(num);
    cout<<num<<endl;
    return 0;

}