#include<iostream>
using namespace std;

void printing(int n){\

    for(int i=n;i>=1;i--){
	    for(int j=i;j>=1;j--){
	        cout<<"* ";
	    }
	    cout<<endl;
	}
}






int main(){

    //reverse triangle
    //****
    //***
    //**
    //*



    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        printing(n);
    }
}