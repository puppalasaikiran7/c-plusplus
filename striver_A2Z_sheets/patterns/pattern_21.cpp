#include<iostream>
using namespace std;
int main(){

    //hollow rectangle 
    int row;
    int col;
    cin>>row;
    cin>>col;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1||i==row||j==1||j==col){
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}



//with out row and col just use n 

// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==1||i==n||j==1||j==n){
//                 cout<<"*";
//             }
//             else {
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
// }