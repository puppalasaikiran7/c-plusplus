#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern9(int n) {
        for(int i=0; i<n; i++){
            for(int j=1; j<=n-i-1; j++){
                cout<<" ";
            }
            for(int k=0; k<=2*i; k++){
                cout<<"*";
            }
            for(int j=1; j<=n-i-1; j++){
                cout<<" ";
            }
            cout<<endl;
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                cout<<" ";
            }
            for(int j=0; j<(2*n-1)-(2*i); j++){
                cout<<"*";
            }
            for(int j=0; j<i; j++){
                cout<<" ";
            }
            cout<<endl;

        }
        

    }
};

int main(){
    Solution sol;
    int n=5;
    sol.pattern9(n);
}