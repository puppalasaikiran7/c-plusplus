#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern19(int n) {
        int j;
        int k;
        for(int i=0;i<n;i++){
            for(int j=1;j<=n-i;j++){
                cout<<"*";
            }
            for(int k=0;k<2*i;k++){
                cout<<" ";
            }
            for(int j=1;j<=n-i;j++){
                cout<<"*";
            }

            cout<<endl;
        }

        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            for(int j=0;j<2*(n-i);j++){
                cout<<" ";
            }
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};

int main(){
    Solution sol;
    int n=4;
    sol.pattern19(n);
}