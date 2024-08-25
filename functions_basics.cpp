#include<iostream>
using namespace std;

void print(int num){    // in this the void means there is no return type
    cout<<num<<endl;
    return;
}


int add(int num1, int num2){   // in this the int means it has integer return type
    
    int sum = num1+num2;
    return sum;
}

int main(){
    int a;
    cout<<"enter the num1 : ";
    cin>>a;
    print(a);
    
    int b;
    cout<<"enter the num2 : ";
    cin>>b;
    print(b);
    
    cout<<"sum : "<<add(a,b)<<endl;     //add function is being called in the main function.
    return 0;
}
    