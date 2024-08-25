#include<iostream>
using namespace std;

int main(){

    //reverse the given number
    int n;
    cin>>n;

    int reverse=0;

    while(n>0){
        int lastdigit=n%10;   // in this we will store the last digit that is 4 from 1234 
        reverse=reverse*10 + lastdigit;    // in this the reversing values will be stored
        n=n/10;   // in this the integer value the is 123 will be stored to n so that after the loop it should not go to 4 again
        
    }
    cout<<reverse<<endl;
    
}