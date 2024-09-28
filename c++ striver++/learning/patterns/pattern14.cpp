#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void pattern14(int n) {
        
        for(int i=1; i<=n;i++){
            char character='A';
            for(int j=1;j<=i;j++){
                cout<<character;
                character++;
            }
            cout<<endl;
        }

    }
};

int main(){
    Solution sol;
    int n=5;
    sol.pattern14(n);
}