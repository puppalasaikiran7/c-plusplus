#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void pattern18(int n) {
        char ch='A'+n-1;
        for(int i=0;i<n;i++){
            for(char cha=ch-i;cha<=ch;cha++){
                cout<<cha<<" ";
            }
            cout<<endl;
        }

    }
};

int main(){
    Solution sol;
    int n=4;
    sol.pattern18(n);
}