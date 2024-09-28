#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void pattern16(int n) {
        char character='A';
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<character;
            }
            character++;
            cout<<endl;
        }

    }
};


int main(){
    Solution sol;
    int n=5;
    sol.pattern16(n);
}