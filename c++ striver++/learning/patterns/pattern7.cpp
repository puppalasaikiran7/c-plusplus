#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern7(int n) {
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

    }
};

int main(){
    Solution sol;
    int n=5;
    sol.pattern7(n);
}

//     *
//    ***
//   *****
//  *******
// *********
