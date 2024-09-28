#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void pattern17(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            char character='A';
            for(int k=0;k<=2*i;k++){
                cout<<character;
                if(k<i){
                    character++;
                }
                else{
                    character--;
                }
            }
            
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            cout<<endl;
        }

    }
};

int main(){
    Solution sol;
    int n=4;
    sol.pattern17(n);
}