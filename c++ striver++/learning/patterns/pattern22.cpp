#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern22(int n) {
        for(int i = 0; i < 2*n-1; i++){
         
            // Inner loop for the columns.
            for(int j = 0; j < 2*n-1; j++){
             
                /* Initialising the top, down, left
                and right indices of a cell.*/
                int top = i;
                int bottom = j;
                int right = (2*n - 2) - j;
                int left = (2*n - 2) - i;
             
                /* Minimum of 4 directions and then we 
                subtract from n because previously we 
                would get a pattern whose border has 0's, 
                but we want with border n's and then
                decreasing inside.*/
                cout<<(n- min(min(top,bottom), min(left,right)))<<" ";
            }
         
            //Move to the next row
            cout<<endl;
        }

    }
};

int main(){
    Solution sol;
    int n=4;
    sol.pattern22(n);
}