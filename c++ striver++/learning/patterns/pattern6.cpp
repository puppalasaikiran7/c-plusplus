#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern6(int n) {
        for(int i=n; i>=1; i--){
            for(int j=1; j<=i; j++){
                cout<<j;
            }
            cout<<endl;
        }

    }
};

int main(){
    Solution sol;
    int n=5;
    sol.pattern6(n);
}