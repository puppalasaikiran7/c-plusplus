#include<iostream>
using namespace std;


void printing(int n){
    for(int i=1;i<=n;i++){
	    for(int j=1;j<=i;j++){
	        cout<<j<<" ";
	    }
	    cout<<endl;
	}
}

int main(){

    //half triangle with number
    //1
    //1 2
    //1 2 3

    int t;
    cin>>t;
    int n;

    for(int i=0;i<t;i++){
        
        cin>>n;
        printing(n);
    }

    
}