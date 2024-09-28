#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void pattern12(int n) {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<j;
            }
            for(int j=1;j<=(2*n)-(2*i);j++){
                cout<<" ";
            }
            for(int j=i;j>=1;j--){
                cout<<j;
            }
            cout<<endl;
        }

    }
};

int main(){
    Solution sol;
    int n=5;
    sol.pattern12(n);
}



// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321