#include<bits/stdc++.h>
using namespace std;

void unorseredsetexplain(){

    unordered_set<int> us;

    us.insert(1);
    us.insert(1);
    us.insert(12);
    us.insert(1);
    us.insert(2);
    us.insert(11);
    us.insert(12);
    us.insert(11);

    for(auto it:us){
        cout<<it<<" ";
    }
    cout<<endl;

    auto itt=us.find(11);
}

int main(){
    unorseredsetexplain();
    return 0;
}