// Online C++ compiler to run C++ program online
#include <iostream>
#include<math.h>
using namespace std;

void fib(int n){
    
    
    int n1=0 , n2=1;
    int n3;
    cout<<n1<<endl<<n2<<endl;

    for(int i=2;i<=n;++i){
        n3=n1 + n2;
        cout<<n3<<endl;
        n1=n2;
        n2=n3;
    }
    

}

int main() {
    // Write C++ code here
    //fibenacci sequence 
    int  n;
    cin>>n;
    fib(n);
    return 0;
}