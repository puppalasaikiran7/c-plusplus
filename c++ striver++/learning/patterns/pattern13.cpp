#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern13(int n) {
        int num=1;
        for(int i=1; i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<num<<" ";
                num++;
            }
            cout<<endl;
        }

    }
};

int main(){
    Solution sol;
    int n=5;
    sol.pattern13(n);
}