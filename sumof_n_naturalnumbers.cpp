// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int n){
    return n*(n+1)/2;
    
}

int main() {
    // Write C++ code here
    //sum of first n natural numbers 
    //formulae ( s=n(n+1)/2)
    int n;
    cin>>n;
    
    int sum=sumOfNaturalNumbers(n);
    cout<<"the sum of natural numbers are : "<<sum<<endl;
    

    return 0;
}