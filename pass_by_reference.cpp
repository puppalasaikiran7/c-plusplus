#include<iostream>
using namespace std;


//pass by reference 
//in the below code example the actual value  is being passed and the changes are made to that value this is pass by reference
void dosomething(int &num){

    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
}

int main(){

    int num=10;
    dosomething(num);
    cout<<num<<endl;
}