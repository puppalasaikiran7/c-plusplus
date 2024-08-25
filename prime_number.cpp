#include<iostream>
#include<math.h>  //it is used for using sqrt
using namespace std;

int main(){

    //prime number are those which are divisible by itself and 1 

    int a;
    cin>>a;

    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0){
            cout<<"this is not a prime number"<<endl;
            break;
        }
        
    }
    cout<<"it is a prime number";
}