#include<iostream>
using namespace std;


void printing(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<"*";
        }
        for(int m=0;m<i;m++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int w=0;w<=n;w++){
        for(int s=0;s<w;s++){
            cout<<" ";
        }
        for(int d=0;d<=n-w;d++){
            cout<<"*";
        }
        for(int x=0;x<n-w;x++){
            cout<<"*";
        }
        cout<<endl;

    }
}



// printing space after the stars then follow this pattern 

// for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<2*i+1;j++){
//             cout<<"*";
            
//         }
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
    
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<2*n-(2*i+1);j++){
//             cout<<"*";
//         }
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
    



int main(){

    //diamond pattern
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        printing(n);
    }
}