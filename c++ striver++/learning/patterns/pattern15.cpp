#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern15(int n) {
        for(int i=0; i<n;i++){
            char character='A';
            for(int j=n-i;j>=1;j--){
                cout<<character;
                ++character;
            }
            cout<<endl;
        }

    }
};

int main(){
    Solution sol;
    int n=5;
    sol.pattern15(n);
}