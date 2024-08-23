#include<iostream>
using namespace std;

int main(){
    
    //if else
    int savings=7000;
    if(savings>5000){
        cout<<"going out with baa\n";
    }
    else{
        cout<<"not going any where\n";
    }

    //if else if
    int rupees=5000;
    if(rupees>10000){
        cout<<"buying her some good stuff that she likes\n";
    }
    else if(rupees>5000){
        cout<<"buying her good tech stuff\n";
    }
    else{
        cout<<"buying her flowers , roses\n";
    }

    //nested if
    int money =5000;
    if(money>5000){
        if(money>10000){
            cout<<"going on road trip with baa";
        }
        else{
            cout<<"going to coffie shop with her";
        }
    }
    else if(money>2000){
        cout<<"buying her some small gift";
    }
    else{
        cout<<"going out with friends";
    }


    //while loop 
    
    int num=1;
    while(num<11){
        cout<<"hello world\n";
        num++;
    }

    //for loop 
    for(int i=0 ; i<10 ; i++){
        cout<<"hello world\n";
    }
    
    //do while loop 
    int n=1;
    do{
        cout<<"hello world\n";
        n++;
    }
    while(n<11);




}