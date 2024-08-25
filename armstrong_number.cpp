#include<iostream>
#include<math.h>
using namespace std;

int main(){

    //armstrong number or not 
    //an armstrong is a number where the cube of the numbers will result in the same number.
    int n;
    cin>>n;
    
    int sum=0;
    int originalnumber=n;
    while(n>0){
        int lastdigit=n%10;
        sum +=pow(lastdigit,3);
        
        n=n/10;
    }
    
    if(sum==originalnumber){
        cout<<"armstrong number"<<endl;
    }
    else{
        cout<<"not armstrong number"<<endl;
    }
    
    cout<<sum<<endl;
    
    
}