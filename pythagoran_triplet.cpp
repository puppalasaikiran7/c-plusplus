// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool check (int a , int b , int c){
    int x=max(a,max(b,c));
    int y,z;
    
    if(x==a){
        y=b;
        z=c;
    }
    else if(x==b){
        y=a;
        z=c;
    }
    else{
        y=a;
        z=b;
    }
    
    if(x*x==y*y+z*z){
        return true;
    }
    else{
        return false;
    }
    
    
    
}

int main() {
    // Write C++ code here
    //pythagoran triplet 
    int a,b,c;
    cin>>a>>b>>c;
    
    if(check(a,b,c)){
        cout<<"pythagoran triplet";
    }
    else{
        cout<<"not a pythagoran triplet";
    }
    
    

    return 0;
}